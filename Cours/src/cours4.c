#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
typedef struct {
    char *nom;
    char *prenom;
    int age;
} type_fiche;
*/




char* my_strdup(char* s)
{
    if(s == NULL){
        return NULL;
    }

/*
    char* copie = (char*) malloc(sizeof(char));
    int i = 0;
    char c = s[i];
    int size = 0;

    while(c != '\0'){
        size += 1;
        i++;
        c = s[i];
    }

    printf("%d \n",size);

    for(i=0; i<size; i++){
        copie[i] = s[i];
    }
*/

    char *copie = (char*) malloc(sizeof(char));
    strcpy(copie, s);

    return copie;

}

char** my_strdup2(char** t, int e)
{
    char** res = (char**) malloc(sizeof(char*)*e);
    int i;

    for(i=0; i<e; i++)
    {
        res[i] = my_strdup(t[i]);

    }
    return res;
}


int main() {


    /*
    type_fiche *fiche = NULL;
    fiche = (type_fiche*) malloc(sizeof(type_fiche));    fiche = (type_fiche*) malloc(sizeof(type_fiche));

    fiche->nom = (char*) malloc(sizeof(char));
    fiche->prenom = (char*) malloc(sizeof(char));

    strcpy(fiche->nom, "Connepas");
    strcpy(fiche->prenom, "Amede");
    fiche->age = 3;

    printf("Nom : %s \n", fiche->nom);
    printf("Prenom : %s \n", fiche->prenom);
    printf("Age : %d \n", fiche->age);

    free(fiche->nom);
    free(fiche->prenom);
    free(fiche);


    char *s = "hello";
    char *res = my_strdup(s);

    printf("%s \n", res);
    */

    int e = 2;
    char** t = (char**) malloc(sizeof(char*)*e);

    t[0] = "hello";
    t[1] = "world";

    char** res = my_strdup2(t, e);
    printf("res[0] = %s, res[1] = %s \n",res[0], res[1]);


    return 0;
}


