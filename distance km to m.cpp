#include<stdio.h>
int main()
{
	int km,m;
	printf("enter the distance in km");
	scanf("%d",&km);
	m=(1/1000)*km;
	printf("the distance in m is %d",m);
	return 0;
}