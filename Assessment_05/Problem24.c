#include<stdio.h>
int main()
{
    int n,digit,total;
    total = 0;
    printf("Enter an number : ");
    scanf("%d",&n);
    for(;n>10;n/=10)
    {
        digit = n % 100;
        if((digit==16) || (digit==25) || (digit==36) || (digit==49) ||
        (digit==64) || (digit==81) )
        {
            total = total + 1 ;
        }
    }
    printf("%d",total);
}
