#include "matrice_lineaire.h"
#include <stdlib.h>

matrice allouer_matrice(int l, int c)
{
  matrice m = {0, 0, NULL};
  int i, j;

  for(i=0; i<l; i++)
  {
	for(j=0; j<c; j++)
	{
		m.donnees = malloc(sizeof(double));
	}
  }

  return m;
}

void liberer_matrice(matrice m)
{
  free(m.donnees);
}

int est_matrice_invalide(matrice m)
{
  int resultat = 0;
  return resultat;
}

double *acces_matrice(matrice m, int i, int j)
{
  double *resultat = NULL;
  return resultat;
}

int nb_lignes_matrice(matrice m)
{
  int resultat = 0;
  return resultat;
}

int nb_colonnes_matrice(matrice m)
{
  int resultat = 0;
  return resultat;
}
