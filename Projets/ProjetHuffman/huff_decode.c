#include <stdio.h>
#include "arbrebin.h"
#include "bfile.h"

FILE * fichier_encode;

Arbre ArbreHuffman;

void Decoder() {
        char c = fgetc(fichier_encode);
	Arbre ab = ArbreHuffman;
	while (c != EOF) {
		if(c == '0' && !EstVide(FilsGauche(ArbreHuffman)))
		{ 
			ArbreHuffman = FilsGauche(ArbreHuffman);
		}
		else if (c == '1'  && !EstVide(FilsDroit(ArbreHuffman)))
		{ 
			ArbreHuffman = FilsDroit(ArbreHuffman);
		}
		if(EstVide(FilsGauche(ArbreHuffman)) && EstVide(FilsDroit(ArbreHuffman)))
		 {
			printf("%c",Etiq(ArbreHuffman));
			ArbreHuffman = ab;
		 }
		c = fgetc(fichier_encode);
	} 
  printf("\n");  
}

int main(int argc, char * argv[]) {
  fichier_encode = fopen(argv[1], "r");

  ArbreHuffman = LireArbre(fichier_encode);

  Decoder();
  
  return 0;
}
