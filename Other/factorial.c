#include<stdio.h>

int main()
{
    int iNum=0, ifactorial=1, itterations;

    printf("\n Enter the number between 1 to 10 of which factorial is to be found: ");
    scanf("%d",&iNum);

    // 5! = 5*4*3*2*1 but for code we do 5! = 1*2*3*4*5 
    for(itterations=1; itterations<=iNum; itterations++)
    {
        ifactorial = ifactorial*itterations;
    }

    printf("The factorial of %d is %d",iNum ,ifactorial);+

    printf("\n");
    return 0;
}