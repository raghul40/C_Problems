#include<stdio.h>
int main()
{
  int a,d,count;
  count = 0;
  printf("Enter an number : ");
  scanf("%d",&a);
  while(a>10)
  {
    d = a % 100;
    if((d == 16) || (d == 25) || (d == 36) || (d == 49) || (d == 64) || (d == 81))
    {
      count = count + 1;
    }
    a = a / 10;
  }
  printf("%d",count);
}