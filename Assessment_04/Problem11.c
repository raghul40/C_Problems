#include<stdio.h>
int main()
{
   int n,count;
   printf("Enter an number : ");
   scanf("%d",&n);
   count = 0 ;
   Loop:if(n > 0)
   {
       count = count + 1;
       n = n / 10;
       goto Loop;
   }
   printf("%d",count);
}
