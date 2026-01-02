#include<stdio.h>
void disp_rsum(int);
int main()
{
    int x;
    scanf("%d",&x);
    disp_rsum(x);
}
void disp_rsum(int x)
{
    int y,sum;
    sum = 0 ;
    for(y=x;y>=1;y--)
    {
        sum = sum + y ;
    }
    printf("%d",sum);
}