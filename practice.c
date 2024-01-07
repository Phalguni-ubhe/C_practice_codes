#include<stdio.h>

int main()
{
    char icharOne = 'a';
    char icharTwo ='b';
    int iNum = icharOne;

    printf("value of first character %d \n",iNum);
    
    printf("value of first character %c \n",(int)icharOne+1);
    printf("value of second character %c \n",icharTwo);

    int happyASCII = 1;

   printf("%c", happyASCII);
    
    printf("Value of test %c","U+1F604");
    
}