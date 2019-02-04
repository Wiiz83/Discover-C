/* � COMPL�TER */

/* impl�mentation d'un type abstrait "File � Priorit�s" */

/* definition du type File */

//	� COMPL�TER !!!

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
 * donn�e-r�sultat : une File F
 * description : initialise la file F
 * effet de bord : F est modifi�e
 ----------------------------------------------------- */
void Initialiser (File * F) ;

/* --------------------------------------------------
 * EstVide
 * donn�e : une File F
 * r�sultat : un bool�en
 * description : vaut vrai ssi F est vide
 ----------------------------------------------------- */
int  EstVide (File F) ;

/* --------------------------------------------------
 * EstPleine
 * donn�e : une File F
 * r�sultat : un bool�en
 * description : vaut vrai ssi F est pleine
 ----------------------------------------------------- */
int  EstPleine (File F) ;

/* --------------------------------------------------
 * Inserer
 * donn�es : un entier x,  un entier p
 * donn�e-r�sultat : une File F
 * description :  ins�re la nouvelle requ�te x de priorit�  p
 * 			dans la file F
 * effet de bord : F est modifi�e
 ----------------------------------------------------- */
void Inserer (File * F, int x, int p) ;

/* --------------------------------------------------
 * Extraire
 * donn�e-r�sultat : une File F
 * r�sultats : un entier x, un entier p
 * description :  supprime de la file F une requ�te
 * 		de priorite maximale p, parmi celles pr�sentes dans F.
 * effet de bord : F est modifi�e
 ----------------------------------------------------- */
void Extraire (File * F, int *x, int *p) ;

//constante

//int TAILLE_MAX = 100;
