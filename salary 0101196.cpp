#include<stdio.h>
int main()
{
    int basic,da,hra,pf,lic;
    printf("enter the basic",basic);
    scanf("%d",&basic);
    printf("enter the da",da);
    scanf("%d",&da);
    printf("enter the hra",hra);
    scanf("%d",&hra);
    printf("enter the pf",pf);
    scanf("%d",&pf);
    printf("enter the lic",lic);
    scanf("%d",&lic);
    float netsalary;
    netsalary=basic+da+hra-lic-pf;
    printf("the net salary is %.2f",netsalary);
    return 0;
}

