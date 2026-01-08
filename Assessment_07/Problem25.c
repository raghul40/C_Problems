#include<stdio.h>
void disp_single_digit_prime(int);
int main()
{
    int x;
    scanf("%d",&x);
    disp_single_digit_prime(x);
}
void disp_single_digit_prime(int x)
{
    int n,digit,count=0;
    n = x;
    while (n > 0)
    {
        digit = n % 10;
        if((digit==2) || (digit==3) || (digit==5) || (digit==7))
        {
            count = count + 1;
        }
        n = n / 10 ;
    }
    printf("%d",count);
}