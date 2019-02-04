/* https://openclassrooms.com/courses/les-piles-et-les-files-4 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "pile.h"

void file_enqueue(File **p_file, int donnee)
{
    File *p_nouveau = malloc(sizeof *p_nouveau);  /* On crée un nouvel élément de type File. */
    if (p_nouveau != NULL)                        /*  On vérifie que le nouvel élément a bien été créé.*/
    {
        p_nouveau->suivant = NULL;                 /* On fait pointer cet élément vers NULL.*/
        p_nouveau->donnee = donnee;                /* On assigne à la donnée de cet élément la donnée que l'on veut ajouter.*/
        if (*p_file == NULL)                      /*  Si la file est vide, alors on fait pointer la file vers l'élément que l'on vient de créer*/
        {
            *p_file = p_nouveau;
        }
        else                                       /* Sinon, on crée un élément temporaire de type File pointant vers notre file*/
        {
            File *p_tmp = *p_file;
            while (p_tmp->suivant != NULL)         /* On parcourt entièrement la file*/
            {
                p_tmp = p_tmp->suivant;
            }
            p_tmp->suivant = p_nouveau;            /* On fait pointer l'élément temporaire vers le nouvel élément créé*/
        }
    }
}
int file_dequeue(File **p_file)
{
    int ret = -1;  /* On teste si la file n'est pas vide. */
    if (*p_file != NULL)
    {
        /* Création d'un élément temporaire pointant vers le deuxième élément de la file. */
        File *p_tmp = (*p_file)->suivant;
        /* Valeur à retourner */
        ret = (*p_file)->donnee;
        /* Effacement du premier élément. */
        free(*p_file), *p_file = NULL;
        /* On fait pointer la file vers le deuxième élément. */
        *p_file = p_tmp;
    }
    return ret;
}
void file_clear(File **p_file)
{
    /* Tant que la file n'est pas vide. */
    while (*p_file != NULL)
    {
        /* On enlève l'élément courant. */
        file_dequeue(p_file);
    }
}


int main ()
{
        file_enqueue(File **p_file, int donnee);
        return 0;
}
