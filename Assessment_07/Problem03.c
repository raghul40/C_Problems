#include<stdio.h>
void disp_sum(int);
int main()
{
    int x;
    scanf("%d",&x);
    disp_sum(x);
}
void disp_sum(int x)
{
    int y,sum;
    sum = 0 ;
    for(y=x;y<=5;y++)
    {
        sum = sum + y ;
    }
    printf("%d",sum);
}