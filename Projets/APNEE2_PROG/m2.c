#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

int main() {

    int seed;
    int i;
    int l=0;
    int j;

    int nb_po;
    int po = 40;
    int position_po;
    int pf = 41;
    int position_pf;

    printf("Une graine ? \n");
    scanf("%d", &seed) ;
    srand(seed);


    printf("Nombre de parentheses ouvrantes ? \n");
    scanf("%d", &nb_po) ;
    srand(nb_po);


    int nombre;
    int range = rand() % 1000;

    char strInitial[1000];

    for (i=0; i<range; i++) {                       /* Longueur aleatoire entre 0 et 1000 */
        nombre = rand() % (122 + 1 - 97) + 97;      /* Generation de nombre entre 97 et 122 */
        l = l+1;                                    /* Longueur de la chaine de caracteres */
        strInitial[j] = nombre;                     /* Ajoute chaque nombre au tableau */
        j++;
    }


    for (i=0; i < nb_po; i++){

        position_po = rand() % l;

        for (j = l - 1; j >= position_po - 1; j--){
          strInitial[j+1] = strInitial[j];
        }
        strInitial[position_po] = po;

    }

    position_pf = rand() % (l + 1 - position_po) + position_po;

    for (j = l - 1; j >= position_pf - 1; j--){
      strInitial[j+1] = strInitial[j];
    }
    strInitial[position_pf] = pf;




   printf("La generation d'un code suivant la methode 2 donne :\n");
   for (j = 0; j <= l; j++) {
      printf("%c", strInitial[j]);
    }


    return 0;


    }


