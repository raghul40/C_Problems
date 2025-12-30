#include<stdio.h>
int main()
{
  int num,digit,count;
  count = 0;
  printf("Enter an number : ");
  scanf("%d",&num);
  for(;num>0;num/=10)
  {
      digit = num % 10 ;
      if((digit==0) || (digit==1) || (digit==4) || (digit==9))
      {
          count = count + 1;
      }
  }
  printf("%d",count);
}
