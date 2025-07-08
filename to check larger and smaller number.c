#include <stdio.h>;
int main()
{
 int num1, num2;
 printf("Enter the first number: ");
 scanf("%d",&num1);
 printf("\nEnter second number: ");
 scanf("%d",&num2);
 if(num1==num2)
 {
   printf("%d is equal to %d");
 }
 else if (num1>num2)
 {
    printf("%d is greater than %d", num1, num2);
 }
 else
 printf("%d is smaller than %d" , num1, num2);
 return 0;
}