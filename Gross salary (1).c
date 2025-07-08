#include <stdio.h>
int main()
{
  float bs,da,hr,gs;
  printf("Enter the bs\t");
  scanf("%f", &bs);
  da= 0.4 * bs ;
  hr = 0.2 * bs ;
  gs = bs +da +hr ;
  printf("gs is %f",gs);
  return 0;
}