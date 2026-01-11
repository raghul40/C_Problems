#include<stdio.h>
int disp_sum_all_digits(int);
int main()
{
    int x,y;
    scanf("%d", &x);
    y = disp_sum_all_digits(x);
    printf("%d",y);
}
int disp_sum_all_digits(int a)
{
    int digit,sum;
    sum = 0;
    while(a > 0)
    {
        digit = a % 10;
        sum = sum + digit;
        a = a / 10;
    }
    return sum;
}