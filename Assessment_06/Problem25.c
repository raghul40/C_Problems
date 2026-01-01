#include<stdio.h>
int main()
{
  int a,d,count;
  count = 0;
  printf("Enter an number : ");
  scanf("%d",&a);
  while(a>0)
  {
    d = a % 10;
    if((d == 2) || (d == 3) || (d == 5) || (d == 7))
    {
      count = count + 1;
    }
    a = a / 10;
  }
  printf("%d",count);
}