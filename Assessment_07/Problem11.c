#include<stdio.h>
void count_total_digits(int);
int main()
{
    int x;
    scanf("%d",&x);
    count_total_digits(x);
}
void count_total_digits(int x)
{
    int num,count;
    num = x;
    count = 0 ;
    while(num > 0)
    {
        count = count + 1;
        num = num / 10;
    }
    printf("%d",count);
}