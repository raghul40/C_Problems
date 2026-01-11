#include<stdio.h>
int count_total_digits(int);
int main()
{
    int x,y;
    scanf("%d", &x);
    y = count_total_digits(x);
    printf("%d",y);
}
int count_total_digits(int a)
{
    int count;
    count = 0;
    while(a != 0)
    {
        a = a / 10;
        count = count + 1;
    }
    return count;
}