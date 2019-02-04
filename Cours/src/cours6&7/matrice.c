#include "matrice.h"


matrice matrice_invalide = { 0, 0, NULL };


matrice allouer_matrice(int l, int c)
{

  matrice m = {l, c, NULL};

  m.donnees = malloc(sizeof(int*)*l);

  int i;
  for(i=0; i<l; i++)
  {
    m.donnees[i] = malloc(sizeof(int)*c);
  }

  return m;

}

void liberer_matrice(matrice m)
{

    int i;
    for(i=0; i<m.l; i++)
    {
        free(*(m.donnees + i));
    }

    free(m.donnees);

}




int est_matrice_invalide(matrice m) {
return (m.l==0) || (m.c == 0);
}

int *acces_matrice(matrice m, int i, int j) {
return &m.donnees[i][j];
}

int nb_lignes_matrice(matrice m) {
return m.l;
}

int nb_colonnes_matrice(matrice m) {
return m.c;
}

void ecrire_matrice(FILE *file, matrice m)
{

    int i, j;
    for(i=0; i<m.l; i++)
    {

	     for(j=0; j<m.c; j++)
	     {
		fprintf(file, "%d ", m.donnees[i][j]);
	     }

   	  fprintf(file, "\n");

    }
	printf("\n");
}

void lire_matrice(FILE *file)
{
	char c;
 	fscanf(file,"%c",&c);
 	 while (!feof(file))
   	 {
    		  printf("%c",c);
    		  fscanf(file,"%c",&c);
   	 }
}
