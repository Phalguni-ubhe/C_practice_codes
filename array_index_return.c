#include<stdio.h>

/*size of array(variable), array(is the pointer to 1st address of array) 
and number to be find(variable) is required in this function.*/
void find_number(int size, int* array, int ifind) 
{
    int i, flag;
    //to check the number is present or not 
    for(i=0; i<=size-1; i++)
    {
        if(array[i] == ifind)
        {
            flag = 1;
            break;
        }
    }

    //print the output 
    if(flag == 1)
    {
        printf("Number is present at position %d",i+1);
    }
    else
    {
        printf("Number not present!!");
    }

}

int main()
{
    int i, size, ifind;
    // taking the size of array as input from user 
    printf("\n Enter the size of array: ");
    scanf("%d",&size);

    int array[size];
    // tacking the elements of array as input from user 
    printf("\n Enter the elements of array ");
    for(i=0; i<size; i++)
    {
        scanf("%d",&array[i]);
    }
    // element to be found in array as input from user 
    printf("Enter the element to be found: ");
    scanf("%d",&ifind);

    //finding the number in array
    find_number(size, array, ifind);
    
    printf("\n");
    return 0;
}