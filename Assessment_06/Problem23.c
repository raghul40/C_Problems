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
     if((d == 0) || (d == 1) || (d == 4) || (d == 9))
     {
        count = count + 1;
     }
     a = a / 10;
   }
   printf("%d",count);
}