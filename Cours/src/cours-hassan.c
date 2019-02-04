    #include <stdio.h>


int main()
{

    /*
    int y = 8;
    int *d = malloc(sizeof(int));
    d = &y;

    printf("d = %p \n", d);    // ADRESSE !
    printf("*d = %d \n", *d);  // CONTENU DE L'ADRESSE !
    */

    /*
    long i=123456; // Un entier long contenant 123456
    long *p_i; // Un pointeur sur un entier long
    p_i=&i; // Le pointeur p_i reçoit l’adresse de i
    printf("%d à l’adresse %#xd, taille de %d octets\n",i,&i,sizeof(i));
    printf("Le pointeur p_i pointe sur l’adresse %#xd\n",p_i);
    */

    int t[3];
    int i, j;

    for(i=0, j=0; i<3; i++)
    {
        t[i] = j++ + i;
        printf("t[%d] = %d \n", i, t[i]);
    }


    return 0;
}


