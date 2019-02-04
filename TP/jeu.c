#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
    int MIN = 0, MAX = 100, nombreMystere = 0, reponse = 0, compteur = 0, nbPlayer = 0, jouer = 1;

    while (jouer == 1) {                                                                                                // Boucle demande jeu
    printf("__________________________________________________\n");
    printf("Voulez vous jouer au jeu du -Plus ou Moins-?\n");
    printf("1. Oui\n");
    printf("2. Non\n");
    printf("\nVotre choix : ");
    scanf("%d",&jouer);
    system("cls");

    if (jouer == 1) {                                                                                                  //Jouer -> Oui

        printf("\n--------------------------------------------------\n");
        printf("- Voulez vous jouer avec un(e) ami(e) ou seul(e)?-\n");
        printf("--------------------------------------------------\n");
        printf("- 1.       Jouer seul(e)     -\n");
        printf("- 2. Jouer avec un(e) ami(e).-\n");
        printf("---------------------------------------------\n");
        printf("-Selectionnez votre choix en entrant 1 ou 2 -\n");
        printf("---------------------------------------------\n\n");
        printf("Votre choix : ");
        scanf("%d",&nbPlayer);
        system("cls");

        if (nbPlayer == 1) {                                                                                            // Nombre de joueur = 1
                printf("__________________________________________________\n");
                printf("Ecrivez le nombre minimum souhaite : ");
                scanf("%d",&MIN);
            do   {                                                                                                      // Boucle redemande si Min > Max
                printf("\n\n__________________________________________________\n");
                printf("Ecrivez le nombre maximum souhaite (Obligatoirement plus grand que le nombre minimum) : ");
                scanf("%d",&MAX);
                system("cls");
            } while (MIN>MAX);

                printf("__________________________________________________\n");
                printf("Allons-y! Trouvez le nombre entre : %d et %d !\n\n",MIN, MAX);
                srand(time(NULL));
                nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;

            while (nombreMystere != reponse) {                                                                          //Debut du jeu
                printf("Votre reponse : ");
                scanf("%d",&reponse);
                compteur++;

            if (reponse > nombreMystere) {
                printf("\nLe nombre mystere est plus petit que : %d !\n",reponse);
            } else if (reponse < nombreMystere){
                printf("\nLe nombre mystere est plus grand que : %d !\n",reponse);
                }
                else {
                    system("cls");
                    printf("_________________________________________________\n");
                    printf("-Bravo vous avez trouve! C'etait bien : %d ! %d coup(s)-\n",nombreMystere,compteur);
                    printf("__________________________________________________\n\n");
                    compteur = 0;
                }
            }

        } else if (nbPlayer == 2){                                                                                      // Nombre de joueur = 2
                printf("__________________________________________________\n");
                printf("Ecrivez le nombre minimum souhaite : ");
                scanf("%d",&MIN);

            do   {                                                                                                      // Boucle redemande si Min > Max
                printf("\n\n__________________________________________________\n");
                printf("Ecrivez le nombre maximum souhaite (Obligatoirement plus grand que le nombre minimum) : ");
                scanf("%d",&MAX);
                system("cls");
            } while (MIN>MAX);

	   // ERREUR
            do {
                printf("Veuillez choisir le nombre mystere : ");                                                        // Demande de nombre
                scanf("%d",&nombreMystere);
                system("cls");
            } while ((nombreMystere<MIN) || (nombreMystere>MAX));

                printf("__________________________________________________\n");
                printf("Allons-y! Trouvez le nombre entre : %d et %d !\n\n",MIN, MAX);
            while (nombreMystere != reponse) {                                                                           //Debut du jeu
                printf("Votre reponse : ");
                scanf("%d",&reponse);
                compteur++;

            if (reponse > nombreMystere) {
                printf("\nLe nombre mystere est plus petit que : %d !\n",reponse);
            } else if (reponse < nombreMystere){
                printf("\nLe nombre mystere est plus grand que : %d !\n",reponse);
                }
                else {
                    system("cls");
                    printf("_________________________________________________\n");
                    printf("-Bravo vous avez trouve! C'etait bien : %d ! %d coup(s)-\n",nombreMystere,compteur);
                    printf("__________________________________________________\n\n");
                    compteur = 0;
                }
            }

        } else {
            printf("Votre choix n'est pas correct.\n\n");

            system("cls");
    }
} else {
printf("Dommage il fallait repondre Oui (1), bonne continuation.\n\n\n");
}
    }
    return 0;
}
