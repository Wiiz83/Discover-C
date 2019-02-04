#include <stdlib.h>
#include <stdio.h>
#include "file.h"

int main() {

  File F;
  int germe ;	/* pour le generateur aleatoire */
  int nb_evenements ;

  /* initialisation du generateur aleatoire */
  printf (" germe : ") ;
  scanf ("%d", &germe) ;
  srand(germe) ;

  /* lecture des parametres de la simulation */
  printf("\n nombre d'evenements a generer : ") ;
  scanf("%d", &nb_evenements) ;

  /* simulation */
  Initialiser(&F) ;

  for (i=0 ; i<nb_evenements ; i++) {





  }

  return 0 ;

}
