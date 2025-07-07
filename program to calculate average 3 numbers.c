#include <stdio.h>
int main() 
{
    int num1, num2, num3;
    float average;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Enter third number: ");
    scanf("%d", &num3);
    average = (num1 + num2 + num3) / 3;
    printf("The average of %d, %d and %d is %.2f\n", num1, num2, num3, average);
    return 0;
}