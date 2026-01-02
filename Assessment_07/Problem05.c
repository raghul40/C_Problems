#include<stdio.h>
void disp_odd(int);
int main()
{
    int x;
    scanf("%d",&x);
    disp_odd(x);
}
void disp_odd(int x)
{
    int y;
    for(y=x;y<=9;y++)
    {
        if(y % 2 != 0)
        {
             printf("%d\n",y);
        }
    }
}