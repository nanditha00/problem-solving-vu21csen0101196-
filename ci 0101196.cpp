#include<stdio.h>
#include<math.h>
int main()
{
    int p,t,r;
    printf("enter the principle value",p);
    scanf("%d",&p);
    printf("enter the rate of intrest",r);
    scanf("%d",&r);
    printf("enter the time",t);
    scanf("%d",&t);
    float ci;
    ci=p*(pow((1+r/100),t));
    printf("the compound intrest is %f",ci);
    return 0;
}
