#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

int main() {

    int seed;
    int i;
    int l=0;
    int j;

    int po = 40;
    int position_po;
    int pf = 41;
    int position_pf;

    printf("Une graine ? \n");
    scanf("%d", &seed) ;
    srand(seed);

    int nombre;
    int range = rand() % 1000;

    char strInitial[1000];

    for (i=0; i<range; i++) {                       /* Longueur aleatoire entre 0 et 1000 */
        nombre = rand() % (122 + 1 - 97) + 97;      /* Generation de nombre entre 97 et 122 */
        l = l+1;                                    /* Longueur de la chaine de caracteres */
        strInitial[j] = nombre;                     /* Ajoute chaque nombre au tableau */
        j++;
    }

    position_po = rand() % l;
    position_pf = rand() % (l + 1 - position_po) + position_po;


   for (j = l - 1; j >= position_po - 1; j--){
      strInitial[j+1] = strInitial[j];
    }

    for (j = l - 1; j >= position_pf - 1; j--){
      strInitial[j+1] = strInitial[j];
    }

   strInitial[position_po] = po;
   strInitial[position_pf] = pf;

   printf("La generation d'un code suivant la methode 1 donne :\n");
   for (j = 0; j <= l; j++) {
      printf("%c", strInitial[j]);
    }


    return 0;


    }


