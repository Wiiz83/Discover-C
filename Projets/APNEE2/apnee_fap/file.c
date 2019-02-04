#include <stdlib.h>
#include <stdio.h>
#include "file.h"

/* implémentation des primitives de la File d'Attente à Priorités */
/* (FICHIER À COMPLÉTER ...) */


/* --------------------------------------------------
 * Initialiser
 * donnée-résultat : une File F
 * description : initialise la file F
 * effet de bord : F est modifiée
 ----------------------------------------------------- */
void Initialiser (File * F) {
  // A completer
}

/* --------------------------------------------------
 * EstVide
 * donnée : une File F
 * résultat : un booléen
 * description : vaut vrai ssi F est vide
 ----------------------------------------------------- */
int  EstVide (File F) {
  // A completer
	return 0 ;
}

/* --------------------------------------------------
 * EstPleine
 * donnée : une File F
 * résultat : un booléen
 * description : vaut vrai ssi F est pleine
 ----------------------------------------------------- */
int  EstPleine (File F) {
  // A completer
	return 0 ;
}

/* --------------------------------------------------
 * Inserer
 * données : un entier x,  un entier p
 * donnée-résultat : une File F
 * description :  insère la nouvelle requête x de priorité  p
 * 			dans la file F
 * effet de bord : F est modifiée
 ----------------------------------------------------- */
void Inserer (File * F, int x, int p) {
  // A modifier
} 


/* --------------------------------------------------
 * Extraire
 * donnée-résultat : une File F
 * résultats : un entier x, un entier p
 * description :  supprime de la file F une requête 
 * 		de priorite maximale p, parmi celles présentes dans F. 	
 * effet de bord : F est modifiée
 ----------------------------------------------------- */
void Extraire (File * F, int *x, int *p) {
  // A modifier
}

