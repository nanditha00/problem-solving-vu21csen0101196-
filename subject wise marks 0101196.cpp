#include <stdio.h>
int main() {
    int a,b,c,d,e;
    printf("enter the marks obtained in a",a);
    scanf("%d",&a);
    printf("enter the marks obtained in b",b);
    scanf("%d",&b);
    printf("enter the marks obtained in c",c);
    scanf("%d",&c);
    printf("enter the marks obtained in d",d);
    scanf("%d",&d);
    printf("enter the marks obtained in e",e);
    scanf("%d",&e);
    int sum;
    sum =(a+b+c+d+e);
    int avg;
    avg=sum/5;
    float per;
    per=avg;
    printf("the sum is %d\n",sum);
    printf("the avg is %d\n",avg);
    printf("the per is %.2f",per);
    return 0;
}
