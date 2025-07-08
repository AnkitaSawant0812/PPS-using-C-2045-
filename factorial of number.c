#include<stdio.h>
int main ()
{
  int num, fact=1, i=1 ;
  printf("Enter the number to find its factorial:");
  scanf("%d", &num);
  while(i<=num)
  {
    fact*=1;
    i++;
  }
  printf("factorial of %d is: %d" , num, fact);
  return 0;
}