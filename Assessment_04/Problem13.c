#include<stdio.h>
int main()
{
   int n,rev,digit;
   printf("Enter an number : ");
   scanf("%d",&n);
   rev = 0;
   Loop:if(n >0)
   {
       digit = n % 10;
       rev = (rev*10) + digit;
       n = n / 10;
       goto Loop;
   }
   printf("%d",rev);
}
