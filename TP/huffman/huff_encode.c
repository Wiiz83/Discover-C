#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "fap.h"
#include "arbrebin.h"
#include "bfile.h"

FILE * fichier;
FILE * fichier_encode;

int TableOcc[256] ;
fap file;
Arbre ArbreHuffman;


struct code_char {
  int lg;
  int code[256];
} HuffmanCode[256];


void  ConstruireTableOcc () {
  int c;
  int i=0;
  FILE* fichier = NULL;
  fichier = fopen("candide.txt", "r");

  if (fichier != NULL)
  {
 	c = fgetc(fichier);
 	while (c != EOF) {
   	if((c>='a' && c<='z') | (c>='A' && c<='Z'))
   	{   
     	i = c;
     	TableOcc[i]+=1;

    	}
  	c = fgetc(fichier);
	}
  }

  fclose(fichier);
 
  for (i=0 ; i<256 ; i++) {
	if (TableOcc[i] != 0)  
  	printf ("Occurences du caractere %c (code %d) : %d\n", i, i, TableOcc[i]) ;
  } ;

}


void InitHuffman() {
  /* A COMPLETER */
  printf("Programme non realise (InitHuffman)\n");
}

Arbre ConstruireArbre() {
  /* A COMPLETER */
  printf("Programme non realise (ConstruireArbre)\n");
  return ArbreVide();
}

void ConstruireCode(Arbre huff) {
  /* A COMPLETER */
  printf("Programme non realise (ConstruireCode)\n");
}

void Encoder() {
  /* A COMPLETER */
  printf("Programme non realise (Encoder)\n");
}
 
int main (int argc, char *argv[]) {
 
  fichier = fopen (argv[1], "r") ;
  /* Construire la table d'occurences */
  ConstruireTableOcc () ;
  /*   fclose(fichier); */
 
  /* Initialiser la FAP */
  InitHuffman();
 
  /* Construire l'arbre d'Huffman */
  ArbreHuffman = ConstruireArbre();
 
  AfficherArbre(ArbreHuffman);

  /* Construire la table de codage */
  ConstruireCode(ArbreHuffman);
 
  /* Encodage */
  fichier = fopen (argv[1], "r");
  fichier_encode = fopen(argv[2], "w");

  Encoder();
 
  fclose(fichier_encode);
  fclose(fichier);

 
  return 0 ;
}
