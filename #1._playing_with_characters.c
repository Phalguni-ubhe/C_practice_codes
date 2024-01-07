#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() 
{
    char ch;
    char s[20];
    char sen[100];

    printf("\n Enter the character: ");
    scanf("%c",&ch);    
    printf("%c",ch);

    printf("\n Enter the string: ");
    scanf("%s", s);
    printf("%s", s);

    printf("\n Enter the sentence: ");
    scanf(" %[^\n]s", sen);
    printf("%s", sen);

    return 0;
}