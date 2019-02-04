#include "bfile.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#define DELIMITEUR '@'
#define READ 0
#define WRITE 1

BFILE *bstart(FILE *fichier, const char *type)
{
  BFILE *resultat = (BFILE *) malloc(sizeof(BFILE));

  if (strcmp(type,"r") == 0)
  {
      resultat->type = READ;
      resultat->fin = 0;
      resultat->taille = 0;
  }
  if (strcmp(type,"w") == 0)
  {
      resultat->type = WRITE;
      resultat->taille = 0;
      resultat->octet = 0;
  }

  return resultat;

}



/*
   bstop
   description : ferme un acces bit a bit a un fichier prealablement ouvert par
                 bstart (termine les E/S en attente et libere la structure
                 BFILE).
   parametres : pointeur vers une structure BFILE renvoyee par bstart
   valeur de retour : 0 si aucune erreur n'est survenue
   effets de bord : ecrit potentiellement dans le fichier
*/
int bstop(BFILE *fichier)
{
  int resultat=0;

  if (fichier->type == WRITE)
    {
      fputc(DELIMITEUR,fichier->fichier);
      fputc(fichier->taille+'0',fichier->fichier);
      if (fichier->taille)
          resultat = fputc(fichier->octet,fichier->fichier);
    }


  free(fichier);
 
  return resultat;
}
  
int bitread(BFILE *fichier)
{
  int resultat;

  if ((fichier->taille == 0) && !beof(fichier))
    {
      fichier->fin = 1;
      resultat = fgetc(fichier->fichier);
      if (resultat == EOF)
          return -1;

      if (resultat == DELIMITEUR)
        {
          resultat = fgetc(fichier->fichier);
          if (resultat == EOF)
              return -1;
          if (resultat == DELIMITEUR)
            {
              fichier->taille = 8;
            }
          else
            {
              resultat -= '0';
              if ((resultat < 1) || (resultat > 8))
                  return -1;
              int taille;
              taille = resultat;
              resultat = fgetc(fichier->fichier);
              if (resultat == EOF)
                  return -1;
              fichier->taille = taille;
            }
        }
      else
        {
          fichier->taille =8;
        }
      fichier->octet = resultat;
      if (fichier->taille > 0)
          fichier->fin = 0;
    }
  fichier->taille--;
  resultat = (fichier->octet >> fichier->taille) & 1; 
  return resultat;
}

int bitwrite(BFILE *fichier, int bit)
{
  int resultat;

  fichier->octet <<= 1;
  fichier->octet |= bit;
  fichier->taille++;
  if (fichier->taille == 8)
    {
      if (fichier->octet == DELIMITEUR)
        {
          resultat = fputc(DELIMITEUR,fichier->fichier);
          if (resultat == EOF)
              return -1;
        } 
      resultat = fputc(fichier->octet,fichier->fichier);
      if (resultat == EOF)
          return -1;
      fichier->taille = 0;
      fichier->octet = 0;
    }
  return 0;
}

int beof(BFILE *fichier)
{
  return fichier->fin;
}
