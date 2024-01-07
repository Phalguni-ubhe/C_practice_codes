//Accept the array from user and sort it in ascending order using insertion sort 

#include<stdio.h>

void getarray(int* arr,int arr_size)
{
    int i; //for itterations

    printf("Enter the elements of array");
    //input elements of array from user
    for(i=0; i<arr_size; i++)     // for(i=0; i<=arr_size-1; i++)   for loop can also written in this form 
    {
        scanf("%d",&arr[i]);
    }
}

void insertion_sort(int* arr,int arr_size)
{
    int i, j, temp;

    for(i=0; i<=arr_size-1; i++) //for sorted array
    {
        temp = arr[i]; //storing the 1st number from sorted array
        j = i-1; //for selecting preceding number to it (last number from sorted array for 1st time) 

        while(j >=0 && arr[j] > temp) //arr[j] > key for ascending order & arr[j] < key for descending order.
        {                              // j>=0 because index of 1st element is 0
            arr[j+1] = arr[j];        // we have checked if the last number of sorted array is greater or not
            j--;                         //if yes swap if not keep as it is 
        }
        arr[j+1] = temp;   
    }
}

void printarray(int* arr,int arr_size)
{
    int i; //for itterations 

    printf("\n The sorted array is ready: \n");
    for(i=0; i<arr_size; i++)     // for(i=0; i<=arr_size-1; i++)       for loop can also written in this form 
    {
        printf("%d \t",arr[i]);
    }
}

int main()
{
    int arr_size;

    printf("\n Enter the size of array which you want to create: ");
    scanf("%d",&arr_size);
    
    int arr[arr_size];

    getarray(arr,arr_size);
    insertion_sort(arr,arr_size);
    printarray(arr,arr_size);

    printf("\n");
    return 0;
}