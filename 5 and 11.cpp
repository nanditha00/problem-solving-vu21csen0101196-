#include<stdio.h>
int main()
{
	int a;
	printf("enter any num",a);
	scanf("%d",&a);
	if(a%5==0 && a%11==0)
	{
		printf("the given num is divisible by both 5 and 11",a);
	}
	else
	{
		printf("the given num is not divisible by 5 and 11",a);
	}
	return 0;
}