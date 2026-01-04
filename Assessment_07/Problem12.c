#include<stdio.h>
void disp_sum_all_digits(int);
int main()
{
    int x;
    scanf("%d",&x);
    disp_sum_all_digits(x);
}
void disp_sum_all_digits(int x)
{
    int num,sum,digits;
    num = x;
    sum = 0 ;
    while(num > 0)
    {
        digits = num % 10;
        sum = sum + digits;
        num = num / 10;
    }
    printf("%d",sum);
}