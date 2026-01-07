#include<stdio.h>
void disp_single_digit_square(int);
int main()
{
    int x;
    scanf("%d",&x);
    disp_single_digit_square(x);
}
void disp_single_digit_square(int x)
{
    int num,digit,count=0;
    num = x;
    while(num > 0)
    {
        digit = num % 10;
        if((digit==0) || (digit==1) || (digit==4) || (digit==9))
        {
            count = count + 1;
        }
        num = num / 10;
    }
    printf("%d",count);
}