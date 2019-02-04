#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define NMAX 50000		/* peut etre modifie si necessaire */



/*
generation_aleatoire
Donnees : t : tableau d'entiers de taille > n, n : entier > 0
Resultat : les valeurs t[0..n-1] ont ete initialisees avec n valeurs aleatoires
           prises dans [0,2147483647] selon une loi uniforme.
Pre-condition : le generateur aleatoire doit avoir ete initialise avec "srand"
*/

void generation_aleatoire(int t[], int n) {
  int i ;

  for (i=0 ; i<n ; i++) {
	  t[i] = rand() ;
  } ;
}

/*
generation_aleatoire_non_uniforme
Donnees : t : tableau d'entiers de taille > n, n : entier > 0
Resultat : les valeurs t[0..n-1] ont ete initialisees avec n valeurs aleatoires
           prises dans [0,2147483647].
Pre-condition : le generateur aleatoire doit avoir ete initialise avec "srand"
*/
void generation_aleatoire_non_uniforme(int t[], int n) {
  int i;
  int x = 0;

  for (i=0; i < n; i++) {
    t[i] = x;
    x = x + ((rand() % 10) - 2);
  }
}

/*
tri_insertion
Donnees : t : tableau d'entiers de taille > n, n : entier > 0
Resultat : le tableau t est trie en ordre croissant
*/

int f_tot = 0;

void tri_insertion(int t[], int n) {
  int i,j;
  int Clef;
  int f;

  f=0;

  for(i=1; i < n; i++) {

    Clef = t[i];

    j = i - 1;

    /* Decalage des valeurs du tableau */
    while((j >= 0) && (t[j] > Clef)) {
      t[j+1] = t[j];
      j = j - 1;
      f++;
    }
    f++;

    /* insertion de la clef */
    t[j+1] = Clef;
  }
  f_tot = f_tot+f;
  printf("%i \n", f_tot) ;
}



/*
tri_segmentation
Donnees : t : tableau d'entiers de taille > n, n : entier > 0
Resultat : le tableau t est trie en ordre croissant
*/
void tri_segmentation(int t[], int n) {


    int gauche = debut-1;

    int droite = fin+1;

    const int pivot = tableau[debut];


    /* Si le tableau est de longueur nulle, il n'y a rien à faire. */

    if(debut >= fin)

        return;


    /* Sinon, on parcourt le tableau, une fois de droite à gauche, et une

       autre de gauche à droite, à la recherche d'éléments mal placés,

       que l'on permute. Si les deux parcours se croisent, on arrête. */

    while(1)

    {

        do droite--; while(tableau[droite] > pivot);

        do gauche++; while(tableau[gauche] < pivot);


        if(gauche < droite)

            echanger(tableau, gauche, droite);

        else break;

    }


    /* Maintenant, tous les éléments inférieurs au pivot sont avant ceux

       supérieurs au pivot. On a donc deux groupes de cases à trier. On utilise

       pour cela... la méthode quickSort elle-même ! */

    quickSort(tableau, debut, droite);

    quickSort(tableau, droite+1, fin);

}


void lancer_mesures() {

  unsigned int germe ;
  int T[NMAX];
  int N;
  int X;
  int i;
  float temps;
  clock_t t1, t2;

  printf("Valeur du germe pour la fonction de tirage aleatoire ? ") ;
  scanf("%d", &germe) ;
  srand(germe) ;

  do {
  	printf("Valeur de N ? ") ;
  	scanf("%d", &N) ;
  } while (N<1 || N > NMAX) ;

    printf("Valeur de X ? ") ;
    scanf("%d", &X) ;

  t1 = clock();

  for(i=0; i < X; i++) {
    generation_aleatoire(T, N) ; /* initialisation du tableau T */
    tri_insertion(T, N) ;	/* tri de T */
  }


  t2 = clock();
  temps = (float)(t2-t1)/N;
  printf("f moyen = %f\n", (float)f_tot/X);
  printf("temps = %f ms \n", temps);

}
