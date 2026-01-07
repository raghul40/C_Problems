#include<stdio.h>
void disp_total_2digit_odd(int);
int main()
{
    int x;
    scanf("%d",&x);
    disp_total_2digit_odd(x);
}
void disp_total_2digit_odd(int x)
{
    int n,count=0,digit;
    n = x;
    while(n > 10)
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