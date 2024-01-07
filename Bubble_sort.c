#include<stdio.h>
int main()
{
    int n,i,j,temp;

    printf("Enter how many elements you want to save: ");
    scanf("%d",&n);

    int arr[n];

    // For getting elements of array from user
    for(i=0; i<=n-1; i++)
    {
    printf("Enter element %d : ",i+1);
    scanf("%d",&arr[i]);
    }

    //Bubblesort
    for(i=0; i<=n-1; i++)
    {
        for(j=0; j<=n-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    //Printing sorted array
    printf("\nSorted array is:");
    for(i=0; i<=n-1; i++)
    {
    printf("%d\t",arr[i]);
    }

    return 0;
}