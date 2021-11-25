#include<stdio.h>
int main()
{
	int seconds,minutes,hours;
	printf("enter the num of hours",hours);
	scanf("%d",&hours);
	minutes=60*hours;
	seconds=60*minutes;
	printf("minutes=%d\n",minutes);
	printf("seconds=%d",seconds);
	return 0;
}