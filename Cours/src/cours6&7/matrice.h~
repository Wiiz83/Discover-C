#ifndef __MATRICE__
#define __MATRICE__

#include <stdlib.h>
#include <stdio.h>

typedef struct donnees_matrice {
int l,c;
int **donnees;
} matrice;

matrice allouer_matrice(int l, int c);

void liberer_matrice(matrice m);

void ecrire_matrice(FILE *file, matrice m);

void lire_matrice(FILE *file);

/* une matrice invalide (telle que est_matrice_invalide(matrice_invalide) retourne 1) */
extern matrice matrice_invalide;


/* description : teste si une matrice est invalide parametres : la matrice
retour : 1 si la matrice est invalide, 0 sinon effets de bord : aucun */
int est_matrice_invalide(matrice m);

/* description : retourne un pointeur vers un parametres : la matrice et les
retour : un pointeur vers int effets de bord : aucun */
int *acces_matrice(matrice m, int i, int j);


/* description : nombre de lignes d’une matrice parametres : la matrice
retour : son nombre de lignes effets de bord : aucun */
int nb_lignes_matrice(matrice m);


/* description : nombre de colonnes d’une matrice parametres : la matrice
retour : son nombre de colonnes effets de bord : aucun */
int nb_colonnes_matrice(matrice m);

#endif
