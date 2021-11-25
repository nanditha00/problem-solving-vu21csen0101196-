#include<stdio.h>
int main()
{
  int a,b,c,d,e,f,g,ch;
  printf("enter two variables a and b here");
  scanf("%d %d",&a,&b);
  printf("enter operation \n 1.addition \n 2.subtraction \n 3.multiplication\n 4.division\n 5.mod");
  scanf("%d",&ch);
  switch(ch)
  {
      case 1:
      c=a+b;
      printf("sum of two numbers is %d\n",c);
      break;
      case 2:
      d=a-b;
      printf("difference is %d\n",d);
      break;
      case 3:
      e=a*b;
      printf("multiplication is %d\n",e);
      break;
      case 4:
      f=a/b;
      printf("division is %d\n",f);
      break;
      case 5:
      g=a%b;
      printf("mod is %d\n",g);
      break;
      default:
      printf("error\n");
  }
  printf("programmer nanditha");
  return 0;
}
