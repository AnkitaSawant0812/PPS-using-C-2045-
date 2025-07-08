#include<stdio.h>
int main()
{
 int num, t = 0 , t1 = 1 , t2,i;
 printf("Enter the terms of fibonacci series: ");
 scanf("%d", &num);
 printf("Fibonacci series: ");
 for( i = 0; i < num ;i++)
 {
  if(i <= 1)
  {
    t2 = i;
  }
  else
  {
    t2 = t + t1;
    t = t1;
    t1 = t2;
  }
  printf("%d\n",t2);
 }
 return 0;
}