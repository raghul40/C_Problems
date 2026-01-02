#include<stdio.h>
void disp_2digit_even_sum6(int);
int main()
{
    int x;
    scanf("%d",&x);
    disp_2digit_even_sum6(x);
}
void disp_2digit_even_sum6(int x)
{
    int i,q,r,sum;
    for(i=x;i<=99;i++)
    {
        q = i / 10;
        r = i % 10;
        sum = q + r;
        if((sum == 6) && (i % 2 == 0))
        {
            printf("%d\n",i);
        }
    }
}