#include<stdio.h>
int main()
{
    int i,q,r,sum;
    i = 11;
    sum = 0 ;
    while(i<=99)
    {
      q = i / 10;
      r = i % 10;
      sum = q + r;
      if((i % 2 != 0) && (sum == 7))
      {
          printf("%d\n",i);
      }
      i = i + 2;
    }
}