/* https://openclassrooms.com/courses/les-piles-et-les-files-4 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "pile.h"

void file_enqueue(File **p_file, int donnee)
{
    File *p_nouveau = malloc(sizeof *p_nouveau);  /* On cr�e un nouvel �l�ment de type File. */
    if (p_nouveau != NULL)                        /*  On v�rifie que le nouvel �l�ment a bien �t� cr��.*/
    {
        p_nouveau->suivant = NULL;                 /* On fait pointer cet �l�ment vers NULL.*/
        p_nouveau->donnee = donnee;                /* On assigne � la donn�e de cet �l�ment la donn�e que l'on veut ajouter.*/
        if (*p_file == NULL)                      /*  Si la file est vide, alors on fait pointer la file vers l'�l�ment que l'on vient de cr�er*/
        {
            *p_file = p_nouveau;
        }
        else                                       /* Sinon, on cr�e un �l�ment temporaire de type File pointant vers notre file*/
        {
            File *p_tmp = *p_file;
            while (p_tmp->suivant != NULL)         /* On parcourt enti�rement la file*/
            {
                p_tmp = p_tmp->suivant;
            }
            p_tmp->suivant = p_nouveau;            /* On fait pointer l'�l�ment temporaire vers le nouvel �l�ment cr��*/
        }
    }
}
int file_dequeue(File **p_file)
{
    int ret = -1;  /* On teste si la file n'est pas vide. */
    if (*p_file != NULL)
    {
        /* Cr�ation d'un �l�ment temporaire pointant vers le deuxi�me �l�ment de la file. */
        File *p_tmp = (*p_file)->suivant;
        /* Valeur � retourner */
        ret = (*p_file)->donnee;
        /* Effacement du premier �l�ment. */
        free(*p_file), *p_file = NULL;
        /* On fait pointer la file vers le deuxi�me �l�ment. */
        *p_file = p_tmp;
    }
    return ret;
}
void file_clear(File **p_file)
{
    /* Tant que la file n'est pas vide. */
    while (*p_file != NULL)
    {
        /* On enl�ve l'�l�ment courant. */
        file_dequeue(p_file);
    }
}


int main ()
{
        file_enqueue(File **p_file, int donnee);
        return 0;
}
