#include <stdlib.h>
#include <stdio.h>
#include "file.h"

/* impl�mentation des primitives de la File d'Attente � Priorit�s */
/* (FICHIER � COMPL�TER ...) */


/* --------------------------------------------------
 * Initialiser
 * donn�e-r�sultat : une File F
 * description : initialise la file F
 * effet de bord : F est modifi�e
 ----------------------------------------------------- */
void Initialiser (File * F) {
  // A completer
}

/* --------------------------------------------------
 * EstVide
 * donn�e : une File F
 * r�sultat : un bool�en
 * description : vaut vrai ssi F est vide
 ----------------------------------------------------- */
int  EstVide (File F) {
  // A completer
	return 0 ;
}

/* --------------------------------------------------
 * EstPleine
 * donn�e : une File F
 * r�sultat : un bool�en
 * description : vaut vrai ssi F est pleine
 ----------------------------------------------------- */
int  EstPleine (File F) {
  // A completer
	return 0 ;
}

/* --------------------------------------------------
 * Inserer
 * donn�es : un entier x,  un entier p
 * donn�e-r�sultat : une File F
 * description :  ins�re la nouvelle requ�te x de priorit�  p
 * 			dans la file F
 * effet de bord : F est modifi�e
 ----------------------------------------------------- */
void Inserer (File * F, int x, int p) {
  // A modifier
} 


/* --------------------------------------------------
 * Extraire
 * donn�e-r�sultat : une File F
 * r�sultats : un entier x, un entier p
 * description :  supprime de la file F une requ�te 
 * 		de priorite maximale p, parmi celles pr�sentes dans F. 	
 * effet de bord : F est modifi�e
 ----------------------------------------------------- */
void Extraire (File * F, int *x, int *p) {
  // A modifier
}

