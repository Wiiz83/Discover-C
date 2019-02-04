
#include <stdio.h>

void tri_insertion(int tab[], int taille)
{
   int i, j;  // deux indices pour les boucles

   for (i = 1; i < taille; ++i) {   // on boucle sur la longueur totale du tableau
       int elem = tab[i];           // a chaque boucle, on initialise elem contenant la valeur de l'element du tableau

       for (j = i; j > 0 && tab[j-1] > elem; j--) // a chaque boucle, on boucle sur
           tab[j] = tab[j-1];
           printf("tab[%d] = %d \n", j, tab[j]);

       tab[j] = elem;
   }
}

int main(void)
{
    int i;  // indice
    int tableau[4] = {5, 3, 2, 4}; // tableau d'entiers

    /* affichage tableau avant tri */
    printf("avant le tri : ");
    for(i = 0; i < 4; i++) printf("%d ", tableau[i]);
    printf("\n");

    /* execution tri */
    tri_insertion(tableau, 4);

    /* affichage tableau apres tri */
    printf("apres le tri : ");
    for(i = 0; i < 4; i++) printf("%d ", tableau[i]);
    printf("\n");

    return 0;
}
