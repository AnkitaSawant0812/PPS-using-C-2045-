#include <stdio.h>
int main() 
{
    int pin,i,x=1234;
    for(i=1;i<=3;i++)
    {
    printf("Enter the Pin:");
    scanf("%d", &pin);
    if(pin==x)
    {
        printf("\n Collect Your Cash");
        break;
    }
    else if(i==3)
    {
        printf("Your card has been blocked for 24 hours");
    }
    else if(x!=pin)
    {
        printf("\n Incorrect Password please try again!!!\n\n");
    }
    }
    return 0;
}