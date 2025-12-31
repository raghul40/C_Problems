#include<stdio.h>
int main()
{
   int n,sum,digit;
   printf("Enter an number : ");
   scanf("%d",&n);
   sum = 0;
   Loop:if(n >0)
   {
       digit = n % 10;
       sum = sum + digit;
       n = n / 10;
       goto Loop;
   }
   printf("%d",sum);
}
