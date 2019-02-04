#include <stdio.h>

int main()
{
    /*
    char s[] = "Hello,world";

    int i = 0;
    while(s[i] != '\0')
        i++;

    int l;
    for(l=0; l<i; l++){
        printf("%c \n", s[l]);
    }
    */


    /*
    typedef int myInt;
    int a = 2;
    myInt b = 2;
    printf("a = %d, b = %d \n", a, b);
    if(a ==b)
    {
        printf("a == b \n");
    }

    else
    {
        printf("a != b \n");
    }

    b = a;
    printf("b = %d \n", b);
    */

    /*
    int* a = malloc(sizeof(int)); //allouer un espace pour un type int (optimal)
    *a = 4;
    printf("*a = %d \n", *a);
    printf("a = %p \n", a);
    */

    /*
    (int *) a = malloc(sizeof(int));
    *a = 10;
    printf("a = %p \n", a);

    int *b;
    b = a;
    // b = &a; impossible
    printf("a = %p, b = %p, *a = %d, *b = %d \n", a, b, *a, *b);

    *b = 5;
    printf("a = %p, b = %p, *a = %d, *b = %d \n", a, b, *a, *b);
    */




    int x = 8;
    int* a = NULL;
    a = &x;

    int y = 6;
    int* b = NULL;
    b = &y;

    printf("a = %p, b = %p, *a = %d, *b = %d \n", a, b, *a, *b);



    int x2 = 4;
    int y2 = 16;

    b = &x2;
    a = &y2;

    printf("a = %p, b = %p, *a = %d, *b = %d \n", a, b, *a, *b);



/*
    int c = 4;
    int d = 16;

    a = c; // a c'est l'adresse de c donc a est un pointeur de c
    b = d; // b c'est l'adresse de d donc b est un pointeur de d

    printf("a = %d, b = %d, *a = %p, *b = &p \n", a, b, *a, *b);

*/

    return 0;

}
