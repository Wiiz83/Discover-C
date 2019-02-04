#include "matrice.h"
#include <stdlib.h>

matrice allouer_matrice(int l, int c)
{
  matrice m = {0, 0, NULL};
  m.donnees = malloc(sizeof(double*)*l);

  int i;
  for(i=0; i<l; i++)
  {
    *(m.donnees + i) = malloc(sizeof(int)*c);
  }

  m.l = l;
  m.c = c;

  return m;
}

void liberer_matrice(matrice m)
{
  free(*m.donnees);
  free(m.donnees);
}

int est_matrice_invalide(matrice m)
{
  int resultat = 0;

  if((m.donnees == NULL) || (*m.donnees == NULL))
  {
	resultat = 1;
  }

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
