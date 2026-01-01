#include<stdio.h>
int main()
{
    int a,digit,count;
    printf("Enter an number : ");
    scanf("%d",&a);
    count = 0;
    while(a > 10)
    {
       digit = a % 100;
       if(digit % 2 != 0)
       {
           count = count + 1;
       }
       a = a / 10;
    }
    printf("%d",count);
}