#include "matrice.h"
#include <stdio.h>
#include <stdlib.h>

int main() {

 int l = 3;
 int c = 4;

 matrice m = allouer_matrice(l, c);

 m.donnees[0][0] = 5;
 m.donnees[0][1] = 6;
 m.donnees[0][2] = 2;
 m.donnees[0][3] = 1;

 m.donnees[1][0] = 8;
 m.donnees[1][1] = 10;
 m.donnees[1][2] = 15;
 m.donnees[1][3] = 4;

 m.donnees[2][0] = 4;
 m.donnees[2][1] = 6;
 m.donnees[2][2] = 9;
 m.donnees[2][3] = 2;

 printf("Nombre de ligne : %d; Nombre de colonne : %d \n", m.l, m.c);
 int i, j;
 for(i=0; i<m.l; i++)
 {

     for(j=0; j<m.c; j++)
     {
        printf("%d ", m.donnees[i][j]);
     }

     printf("\n");
 }

  FILE *file = fopen("mat.txt", "w");
  ecrire_matrice(file, m);
  fclose(file);

/*
 matrice m = {l, c, NULL};
 m  = allouer_matrice(l, c);
 */

  FILE *file_read = fopen("mat.txt", "r");
  lire_matrice(file_read);
  fclose(file_read);

 liberer_matrice(m);

 return 0;

}

