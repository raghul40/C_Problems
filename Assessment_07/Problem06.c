#include<stdio.h>
void disp_2digit_odd_below20(int);
int main()
{
    int x;
    scanf("%d",&x);
    disp_2digit_odd_below20(x);
}
void disp_2digit_odd_below20(int x)
{
    int y;
    for(y=x;y<=20;y++)
    {
        if(y % 2 != 0)
        {
             printf("%d\n",y);
        }
    }
}