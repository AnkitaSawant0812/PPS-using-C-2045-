#include<stdio.h>
int main()
{
int score;
printf("enter the score");
scanf("%d",&score);

if(score>=90)
{
if(score>=50)
{
printf("grade is A");
}
else
{
printf(" grade is B");
}
}
else
{
printf("grade is c");
}

return 0;
}