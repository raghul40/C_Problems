#include<stdio.h>
void disp_total_odd_digits(int);
int main()
{
    int x;
    scanf("%d",&x);
    disp_total_odd_digits(x);
}
void disp_total_odd_digits(int x)
{
    int n,count=0,digit;
    n = x;
    while(n > 0)
    {
        digit = n % 10;
        if(digit % 2 != 0)
        {
            count = count + 1;
        }
        n = n / 10;
    }
    printf("%d",count);
}