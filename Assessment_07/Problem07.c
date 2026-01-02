#include<stdio.h>
void disp_2digit_odd_sum7(int);
int main()
{
    int x;
    scanf("%d",&x);
    disp_2digit_odd_sum7(x);
}
void disp_2digit_odd_sum7(int x)
{
    int i,q,r,sum;
    for(i=x;i<=99;i++)
    {
        q = i / 10;
        r = i % 10;
        sum = q + r;
        if((sum == 7) && (i % 2 != 0))
        {
            printf("%d\t",i);
        }
    }
}