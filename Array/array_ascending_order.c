#include<stdio.h>

int main()
{
    int i, j, k, r, c, t;

    printf("\n Enter the dimensions of array \n table & Row & Column");
    scanf("%d %d %d",&t ,&r,&c);

    //declare the array
    int array[t][r][c];

    //initialization 
    printf("\n Enter the elements in array row by row: ");
    for(k=0; k<t; k++)
    {
        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
                scanf("%d",&array[k][i][j]);
            }
        }
    }    

    printf("The array is:\n");
    for(k=0; k<t; k++)
    {
        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
                printf("%d \t",array[k][i][j]);
            }
            printf("\n");
        }
        printf("\n");
    } 

    // Ascending order 

    

    printf("\n");
    return 0;
}