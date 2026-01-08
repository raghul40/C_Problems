#include<stdio.h>
void disp_biggest_4digit_div7_9(int);
int main()
{
    int x;
    scanf("%d",&x);
    disp_biggest_4digit_div7_9(x);
}
void disp_biggest_4digit_div7_9(int x)
{
    int i;
    for(i=x;i >= 1000 ; i--)
    {
        if((i % 7 == 0) && (i % 9 == 0))
        {
            printf("%d",i);
            goto end;
        }
    }
    end:
}