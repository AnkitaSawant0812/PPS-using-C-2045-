#include <stdio.h>

int main()
{
  int number = 10;
  int i=1, table;
  printf("Multiplication table of %d is: \n",number);
  do
  {
    table = number * i;
    printf("%d x %d = %d \n", number,i, table);
    i++;
  }while(i<=10);
  return 0;
}