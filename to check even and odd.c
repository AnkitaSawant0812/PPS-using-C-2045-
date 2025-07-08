#include <stdio.h>;
int main()
{
 int number;
 printf("Enter an integer: ");
 scanf("%d",&number);
 if(number%2 == 0)
 {
    printf("The given integer is EVEN\n");
 }
 else
 {
    printf("The given integer is ODD\n");
 }
 return 0;
}