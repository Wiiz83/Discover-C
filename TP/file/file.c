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
	F->tab = (Element *) malloc(TAILLE_MAX * sizeof(Element));
	F->taille = 0;
}

/* --------------------------------------------------
 * EstVide
 * donn�e : une File F
 * r�sultat : un bool�en
 * description : vaut vrai ssi F est vide
 ----------------------------------------------------- */
int  EstVide (File F) {
	// A completer
	return (F.taille==0);
}

/* --------------------------------------------------
 * EstPleine
 * donn�e : une File F
 * r�sultat : un bool�en
 * description : vaut vrai ssi F est pleine
 ----------------------------------------------------- */
int  EstPleine (File F) {
  // A completer
	return (F.taille==TAILLE_MAX) ;
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
	F->tab[F->taille].donnee = x;
	F->tab[F->taille].priorite = p;
	F->taille++;
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
	
	int prio = -1;
	int ind=-1;
	int i;
	for (i=0; i<F->taille; i++)
	{
		if (F->tab[i].priorite>prio)
		{
			prio=F->tab[i].priorite;
			ind=i;
		}
	}
	*x = F->tab[ind].priorite;
	*p = F->tab[ind].donnee;
	F->tab[ind].priorite=F->tab[F->taille-1].priorite;
	F->tab[ind].donnee=F->tab[F->taille-1].donnee;
	F->taille--;
}

