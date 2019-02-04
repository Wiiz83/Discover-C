typedef struct pile
{
    int donnee; /* La donn�e que notre pile stockera. */
    struct pile *precedent; /* Pointeur vers l'�l�ment pr�c�dent de la pile. */
} Pile;

typedef struct file
{
    int donnee;
    struct file *suivant;
} File;
