
#include <stdlib.h>
#include <stdio.h>

#include "file.h"

int main() {

  File F;
  char saisie[2]; // Saisie au clavier
  int x, p; // Élément, priorité
  
  Initialiser(&F);

  printf("Type d'évènement ['i' pour insérer, 'e' pour extraire, 'q' pour quitter] : ");
  scanf("%s",saisie);

  while(saisie[0] != 'q') {
    switch (saisie[0]) {
    case 'i':
      if (EstPleine(F)) {
	printf("Erreur : la file est pleine !\n");
      } else {
	printf("Élément à insérer : ");
	scanf("%d",&x);
	printf("Priorité de l'élément : ");
	scanf("%d",&p);
	Inserer(&F,x,p);
      };
      break;
    case 'e':
      if (EstVide(F)) {
	printf("Erreur : la file est vide !\n");
      } else {
	Extraire(&F,&x,&p);
	printf("Élément extrait : %d, de priorité %d\n",x,p);
      };
      break;
    }
    printf("Type d'évènement ['i' pour insérer, 'e' pour extraire, 'q' pour quitter] : ");
    scanf("%s",saisie);
  }

  return 0 ;

}
