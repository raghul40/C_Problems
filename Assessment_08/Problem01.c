#include<stdio.h>
int disp_sum(int);
int main()
{
    int x,y;
    scanf("%d",&x);
    y = disp_sum(x);
    printf("%d",y);
}
int disp_sum(int a)
{
    int i,sum;
    sum = 0 ;
    for(i=1;i<=5;i++)
    {
        sum = sum + i;
    }
    return sum;
}