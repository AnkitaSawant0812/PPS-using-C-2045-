#include<stdio.h>
int main()
{
int cp,sp,P,L;
printf("enter cost price");
scanf("%d",&cp);
printf("enter selling price");
scanf("%d",&sp);
P=sp-cp;
L=cp-sp;
if(sp<cp)
{
printf("you get loss");
}
else
if(cp<sp)
{
printf("you get profit");
}
else
{
printf("you det nor profit and you get nor loss");
}
return 0;
}
