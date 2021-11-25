#include<stdio.h>
int main()
{
    int dividend,divisor,remainder;
    printf("enter the dividend",dividend);
    scanf("%d",&dividend);
    printf("enter the divisor",divisor);
    scanf("%d",&divisor);
    while(dividend>=divisor)
    {
     dividend=dividend-divisor;   
    }
    remainder=dividend;
    printf("the remainder is %d",remainder);
    return 0;
    
}