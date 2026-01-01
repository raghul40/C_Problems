#include<stdio.h>
int main()
{
    int n,i,digit,count,sum;
    count = 0;
    i = 10;
    while(i < 100000)
    {
        n = i;
        sum = 0;
        while(n > 0)
        {
            digit = n % 10 ;
            sum = sum + digit;
            n = n / 10;
        }
        if(sum == 14)
        {
            count = count + 1;
        }
        i = i + 1;
    }
    printf("%d",count);
}