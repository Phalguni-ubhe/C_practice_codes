#include<stdio.h>

int factorial(int num); 

int main()
{
    int num,value_factorial;

    printf("\n Enter the number of which factorial is to be counted :");
    scanf("%d",&num);
    
    if(num<0)
    {
        printf("\n No factorial of negative number");
    }
    else 
    {
        if(num==0)
        {
            printf("\n Factorial of 0 is 1");
        }
        else 
        {
            value_factorial = factorial(num); 
            printf("\n Factorial of %d is %d",num, value_factorial);
        }
    }
    
}

int factorial(int num)
{
    if(num>1)
    {
        return num * factorial(num-1);
    }
    else 
    {
        return 1;
    }
}