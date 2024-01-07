#include<stdio.h>

void getarray(int* arr,int n)
{
    int i;

    // For getting elements of array from user
    printf("Enter elements of array: ");
    for(i=0; i<=n-1; i++)
    {
        scanf("%d",&arr[i]);
    }
}


void selectionsort(int* arr,int n)//Selection sort
{

    int i, j, temp, indexOfMin;

    for(i=0; i<n-1; i++)
    {
        indexOfMin = i;   //consider the first number of array as minimum
        for(j=i+1; j < n; j++)  
        {
            if(arr[j] < arr[indexOfMin])   //chk if second num is less or not 
            {
                indexOfMin = j;            //if less store it in minimum 
            }
        }

        // swap arr[i] first considered number and arr[indexOfMin] minimum number from array 
        temp = arr[i];
        arr[i] = arr[indexOfMin];
        arr[indexOfMin] = temp;
    }
}

void printarray(int* arr, int n)//printing array
{    

    int i;

    
    printf("\n Sorted array is: ");
    for(i=0; i<=n-1; i++)
    {
    printf("%d\t",arr[i]);
    }
}


int main()
{
    int n;

    printf("Enter size of array: ");
    scanf("%d",&n);

    int arr[n];

    getarray(arr,n);
    selectionsort(arr, n);
    printarray(arr, n);
}