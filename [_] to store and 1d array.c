#include<stdio.h>
int main()
{
   int n,i;
   printf("Enter the number of element for the array: ");
   scanf("%d",&n);
   int arr[n];
   printf("Enter the %d integer elements: \n",n);
   for(i=0;i<n;i++)
  {
    printf("Element %d: ",i+1);
    scanf("%d",&arr[i]);
  }
  printf("\nThe element in array array are: ");
  for(i=0;i<n;i++)
  {
     printf("%d", arr[i]);
  }
  printf("\n");
  return 0;
}