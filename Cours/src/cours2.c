#include <stdio.h>


//extern RemplissageTableauB();


double func(int x)
{
    double y = 1.0 * x * x / 4 - x + 1;
    return y;
}

double minTable(double table[], int size)
{
/*
    double min;
    int i;
    min = y;

    for(i=0; i<10; i++)
    {
        if(min < y)
        {
            min = y;
        }

    }
*/

    int i;
    double min = table[0];
    for(i=1; i<size; i++)
    {
        if(min > table[i])
        {
            min = table[i];
        }
    }

    return min;

}


double maxTable(double table[], int size)
{
    int i;
    double max = table[0];
    for(i=1; i<size; i++)
    {
        if(max < table[i])
        {
            max = table[i];
        }
    }
    return max;
}


double moyTable(double table[], int size)
{
    int i;
    double sum = 0;
    for(i=1; i<size; i++)
    {
        sum = sum + table[i]; // sum += table[i];
    }
    double moy = sum / size;
    return moy;
}


int main ()
{
    int size = 10;
    int a[size];
    double b[size];
    int i;


    for(i=0; i<size; i++)
    {
        a[i]= i;
        //printf("%d \n", a[i]);
        b[i] = func(a[i]);
        printf("b[%d] = %f \n", i, b[i]);
    }

    double min = minTable(b, size);
    printf("Minimum : %f" , min);

    double max = maxTable(b, size);
    printf(" Maximum : %f", max);

    double moy =  moyTable(b, size);
    printf(" Moyenne : %f", moy);
  /*
    //double res = func(3);
    //printf("res = %f", res);

    //RemplissageTableauB();

    //b = &a; a = b; &b = a sont syntaxes invalides

    for(i=0; i<size; i++)
    {
        printf("b[%d] = %f", i, b[i]);
    }*/

    return 0;

}


/*
double[10] RemplissageTableauB()
{
    double b[10];

    for(i=0; i<10; i++)
    {
        b[i] = ((a[i] * a[i]) /4) - a[i] +1;
    }

    return b;

}
*/
