#include<stdio.h>
void disp_2digit_odd_sum_tens7(int);
int main()
{
    int x;
    scanf("%d",&x);
    disp_2digit_odd_sum_tens7(x);
}
void disp_2digit_odd_sum_tens7(int x)
{
    int i,digit,sum;
    sum = 0;
    i = x;
    while(i<=99)
    {
        digit = i / 10;
        if((digit == 7) && (i % 2 != 0))
        {
           sum = sum + i;
        }
        i = i + 1;
    }
    printf("%d",sum);
}