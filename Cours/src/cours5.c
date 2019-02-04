
int main()
{

/*
    int tb[4] = {0, 2, 1, 3};
    int i = 0;
    int* pb = tb;


    for(i=0; i<4; i++){
        printf("tb[%d] = %d \n", i, tb[i]);
    }

    for(i=0; i<4; i++)
    {
        printf("pb = %d \n", *(pb + i));
    }

    for(i=0; i<4; i++){
        printf("tb = %d \n", *(tb + i));
    }


    for(i=0; i<4; i++)
    {
        printf("pb[%d] = %d \n", i, pb[i]);
    }
*/

/*
    int* pb = malloc(sizeof(int)*4);
    *pb = 0;

    *(pb+1) = 2;
    *(pb+2) = 1;
    *(pb+3) = 3;

    int i;
    for(i=0; i<4; i++)
    {
        printf("%d \n", *(pb + i));

    }

*/


    int** pb = malloc(sizeof(int*)*4);


    *pb = malloc(sizeof(int)*3);
    *(pb + 1) = malloc(sizeof(int)*3);
    *(pb + 2) = malloc(sizeof(int)*3);
    *(pb + 3) = malloc(sizeof(int)*3);


    **pb =
    *(*(pb +1)+1) =
    *(*(pb)+1)




/*
    int tb[4][3] = {{1,2,3}, {4,0,5}, {6,10,3}, {7,8,5}};
    int i, j;

    for(i=0; i<4; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ", tb[i][j]);

        }
        printf("\n");
    }


    for(i=0; i<4; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ", *(*(tb+i)+j));

        }
        printf("\n");
    }
*/





}
