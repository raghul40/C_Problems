#include<stdio.h>
int main()
{
    int n;
    n=11;
    Loop:if(n<20)
    {
      if(n % 2 != 0)
      {
          printf("%d\n",n);
      }
      n++;
      goto Loop;
    }
}
