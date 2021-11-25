#include<stdio.h>
#include<string.h>
int main()
{
    char upr;
    int ascii;
    printf("enter the upper case character");
    scanf("%c",&upr);
    ascii=upr+32;
    printf("%c character in lower case is %c",upr,ascii);
    return 0;
}