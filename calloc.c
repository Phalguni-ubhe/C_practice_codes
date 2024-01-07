#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i, n=0, iSizeOfArray, *ptr;
    int array[n];

    printf("\n Enter the value of size the array is to created:");
    scanf("%d",&iSizeOfArray);
    ptr=(int *)calloc(iSizeOfArray , sizeof(int)); 

    printf("\n Enter the elements of array:");
    for(i=0; i<iSizeOfArray; i++)
    {
        scanf("%d",&array[i]);
    }


    printf("\n \n The array is:");
    for(i=0; i<iSizeOfArray; i++)
    {
        printf("%d \t",array[i]);
    }

    printf("\n");
    return 0;
}