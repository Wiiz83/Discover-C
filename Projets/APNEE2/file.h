/* À COMPLÉTER */

/* implémentation d'un type abstrait "File à Priorités" */

/* definition du type File */

//	À COMPLÉTER !!!

typedef struct {
	int donnee;
	int priorite;
} Element;

typedef struct {
	Element *tab;
	int taille;
} File;

/* profil des primitives */

/* --------------------------------------------------
 * Initialiser
 * donnée-résultat : une File F
 * description : initialise la file F
 * effet de bord : F est modifiée
 ----------------------------------------------------- */
void Initialiser (File * F) ;

/* --------------------------------------------------
 * EstVide
 * donnée : une File F
 * résultat : un booléen
 * description : vaut vrai ssi F est vide
 ----------------------------------------------------- */
int  EstVide (File F) ;

/* --------------------------------------------------
 * EstPleine
 * donnée : une File F
 * résultat : un booléen
 * description : vaut vrai ssi F est pleine
 ----------------------------------------------------- */
int  EstPleine (File F) ;

/* --------------------------------------------------
 * Inserer
 * données : un entier x,  un entier p
 * donnée-résultat : une File F
 * description :  insère la nouvelle requête x de priorité  p
 * 			dans la file F
 * effet de bord : F est modifiée
 ----------------------------------------------------- */
void Inserer (File * F, int x, int p) ;

/* --------------------------------------------------
 * Extraire
 * donnée-résultat : une File F
 * résultats : un entier x, un entier p
 * description :  supprime de la file F une requête
 * 		de priorite maximale p, parmi celles présentes dans F.
 * effet de bord : F est modifiée
 ----------------------------------------------------- */
void Extraire (File * F, int *x, int *p) ;

//constante

//int TAILLE_MAX = 100;
