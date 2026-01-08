#include<stdio.h>
void disp_two_digit_square(int);
int main()
{
    int x;
    scanf("%d",&x);
    disp_two_digit_square(x);
}
void disp_two_digit_square(int x)
{
    int a,n,count=0;
    a = x;
    while ( a > 10)
    {
        n = a % 100;
        if((n==16)||(n==25)||(n==36)||(n==49)||(n==64)|| (n==81))
        {
            count = count + 1;
        }
        a = a / 10;
    }
    printf("%d",count);
}