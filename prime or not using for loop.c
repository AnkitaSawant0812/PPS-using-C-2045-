#include<stdio.h>
int main ()
{
   int num, i, check=0, rem;
   printf("Enter the number:\t");
   scanf("%d",&num);
   for(i=2 ;i<num ; i++)
   rem = num%i;
   if(rem==0)
   {
     check=1;
     
   }
   if(check==0)
   {
     printf("Prime\n");
   }
   else
   {
     printf("Not prime\n");
   }
   return 0;
}