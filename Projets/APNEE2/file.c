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
	F->tab = (Element *) malloc(100 * sizeof(Element));
	F->taille = 0;
}

/* --------------------------------------------------
 * EstVide
 * donnée : une File F
 * résultat : un booléen
 * description : vaut vrai ssi F est vide
 ----------------------------------------------------- */
int  EstVide (File F) {
	// A completer
	return (F.taille==0);
}

/* --------------------------------------------------
 * EstPleine
 * donnée : une File F
 * résultat : un booléen
 * description : vaut vrai ssi F est pleine
 ----------------------------------------------------- */
int  EstPleine (File F) {
  // A completer
	return (F.taille==100) ;
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
	Element el;
	el.donnee = x;
	el.priorite = p;
	F->tab[F->taille] = el;
	F->taille++;
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
	int prio = -1;
	int ind=-1;
	int i;
	for (i=0; i>F->taille; i++)
	{
		if (F->tab[i].priorite>prio)
		{
			prio=F->tab[i].priorite;
			ind=i;
		}
	}
	F->tab[ind].priorite=F->tab[F->taille].priorite;
	F->tab[ind].donnee=F->tab[F->taille].donnee;
	F->taille--;
}
