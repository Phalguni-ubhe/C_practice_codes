#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a=0, b=0 ,n=0;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
    for(n=a; n<=b;n++)
    {
        if(n==1)
        {
            printf("\nOne");
        }
        else if(n==2)
        {
            printf("\nTwo");
        }
        else if(n==3)
        {
            printf("\nThree");
        }
        else if(n==4)
        {
            printf("\nFour");
        }
        else if(n==5)
        {
            printf("\nFive");
        }
        else if(n==6)
        {
            printf("\nSix");
        }
        else if(n==7)
        {
            printf("\nSeven");
        }
        else if(n==8)
        {
            printf("\nEight");
        }
        else if(n==9)
        {
            printf("\nNine");
        }
        else
        {
            if(n%2==0)
            {
                printf("\nEven");
            }
            else
            {
                printf("\nOdd");
            }
        }
    }

    return 0;
}