#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "fap.h"
#include "arbrebin.h"
#include "bfile.h"

FILE * fichier;
FILE * fichier_encode;

int TableOcc[256];
fap file;
Arbre ArbreHuffman;

int Tab[256] = {0};
int k = 0;

struct code_char {
  int lg;
  int code[256];
} HuffmanCode[256];


/* 1 --- Construire la table d'occurences */
void  ConstruireTableOcc (FILE *fichier) {

  int c,i;

  for(i=0; i<256; i++) {
	TableOcc[i] = 0;
  }


  if (fichier != NULL) // si fichier existe
  {

  c = fgetc(fichier);
	  while (c != EOF) {
 		  if (c == 10) { 
			c = fgetc(fichier); 
		  }
                  else {
	  	  	TableOcc[c]=TableOcc[c]+1; // ajouter 1 pour chaque occurence d'un caractere 
	   	  	c = fgetc(fichier); // passer au caractere suivant 
                  }
	  }

  for (i=0 ; i<256 ; i++) {
    if (TableOcc[i] != 0)  
      printf ("Occurences du caractere %c (code %d) : %d\n", i, i, TableOcc[i]) ;
    } 
  }
}



/* 2 --- Initialiser la FAP */
void InitHuffman() {
   int i = 0;
   Arbre noeud = ArbreVide();
   file=creer_fap_vide(); // creation d'un FAP vide

   for (i=33;i<256;i++)
   {
	 if (TableOcc[i] != 0) {
	   noeud=NouveauNoeud(ArbreVide(),i,ArbreVide()); // creation d'un noeud pour chaque caractere
	   file=inserer(file,noeud,TableOcc[i]);// puis insertion dans la FAP par ordre croissant d'occurence
	} 
   }

}


/* 3 --- Construire l'arbre d'Huffman */
Arbre ConstruireArbre() {

  Arbre noeud = ArbreVide(); 
  Arbre fg = ArbreVide();  // fils gauche
  Arbre fd = ArbreVide();  // fils droit
  int pg=0;  // priorite fils gauche
  int pd=0;  // priorite fils droit
  int ps=0;  // priorite somme des priorites du fils gauche et droit

  while (!est_fap_vide(file->prochain)) // tant que la file contient des elements
  {
        file = extraire(file,&fg,&pg); // extraction du caractere a plus faible occurrence qui sera notre fils gauche
	file = extraire(file,&fd,&pd); // extraction du deuxieme caractere a plus faible occurrence qui sera notre fils droit
	ps = pg+pd; // addition des deux occurences 
        noeud = NouveauNoeud(fg,ps,fd); // creation d'un nouveau noeud contenant la somme des deux priorites et lie aux deux fils 
	file = inserer(file,noeud,ps); // insertion de ce noeud dans la file
  }
  
  file=extraire(file,&noeud,&ps); // ?
  return noeud;
}


/* 4 --- Construire la table de codage */
void ConstruireCode(Arbre huff) {

   if(!EstVide(huff->fd))
	 {
		Tab[k] = 1;
		k=k+1;
		ConstruireCode(huff->fd);
		k=k-1;
	}
	
   if(!EstVide(huff->fg))
	 {
		Tab[k] = 0;
		k=k+1;
		ConstruireCode(huff->fg);
		k=k-1;
	}

   if(EstVide(huff->fg) && EstVide(huff->fd)) {
		HuffmanCode[Etiq(huff)].lg=k;
		int i;
		for (i=0 ; i<k ; i++)
		 { 
			HuffmanCode[Etiq(huff)].code[i]=Tab[i];
		}
	}
}

/* 5 --- Encodage */
void Encoder() {

	EcrireArbre(fichier_encode, ArbreHuffman);
	int c, i;
	c = fgetc(fichier);
	while (c != EOF) 
	{
			for(i=0;i<HuffmanCode[c].lg;i++)
			 {
				fprintf(fichier_encode,"%c",HuffmanCode[c].code[i]);
			}
		c = fgetc(fichier);
	} 
}
 

void TxCompression() {
int sz1, sz2;
int res;

fseek(fichier, 0L, SEEK_END);
sz1 = ftell(fichier);

fseek(fichier_encode, 0L, SEEK_END);
sz2 = ftell(fichier_encode);

res = (sz2 / sz1);

printf("sz1 = %d, sz2 = %d, res = %d \n", sz1, sz2, res);
}




int main (int argc, char *argv[]) {
 
  if (argc < 3) 
  {
    printf("pas assez d'arg\n");
    exit(0);
  }

  if ((fichier = fopen (argv[1], "r")) == NULL)
  {
      printf("couldnt open\n");
      exit(0);
  }


  /* 1 --- Construire la table d'occurences */
  ConstruireTableOcc (fichier) ;
  /*   fclose(fichier); */

 
  /* 2 --- Initialiser la FAP */
  InitHuffman();

 
  /* 3 --- Construire l'arbre d'Huffman */
  ArbreHuffman=ArbreVide();
  ArbreHuffman = ConstruireArbre();
  AfficherArbre(ArbreHuffman);


  /* 4 --- Construire la table de codage */
  ConstruireCode(ArbreHuffman);

 
  /* 5 --- Encodage */
  fichier = fopen (argv[1], "r");
  fichier_encode = fopen(argv[2], "w");
  Encoder();
  TxCompression();
  fclose(fichier_encode);
  fclose(fichier);

 
  return 0 ;
}

