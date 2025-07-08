#include<stdio.h>
int main()
{
  int i,j, rows=4, colums =4;
  for(i=0;i<rows;i++)
  {
    for(j=0;j<colums;j++)
    {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}