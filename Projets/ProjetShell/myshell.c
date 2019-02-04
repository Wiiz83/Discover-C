#include "myshell.h"

// fonctions externes
void eval(char*cmdline);
int parseline(char *buf, char **argv);
int builtin_command(char **argv);

int main()
{
    	char cmdline[MAXLINE];                 // ligne de commande
	int taille = 0;
	job Tab;
	
	Tab = initialisation(&Tab);
	 
	/*
	ajouter_job(&Tab, &taille, 3, 8);
	ajouter_job(&Tab, &taille, 2, 5);

	int t = premiere_case(&Tab, taille);
	printf("%d\n",t);

	int n = numero_job(&Tab, taille);

	afficher_test(&Tab,taille); 	//test d'affichage apres l'ajout

	supprime_job(&Tab, &taille, 3);
	afficher_test(&Tab,taille); 	//test d'affichage apres l'ajout
	*/


    while (1) {                            // boucle d'interpretation
        printf("<my_shell> ");             // message d'invite
	Fgets(cmdline, MAXLINE, stdin);    // lire commande
        if (feof(stdin))                   // fin (control-D)
            exit(0);
        eval(cmdline);                     // interpreter commande
    }
    
}
