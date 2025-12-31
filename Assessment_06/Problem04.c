#include<stdio.h>
int main()
{
    int i,sum;
    i = 6;
    sum = 0;
    while(i>=1)
    {
        sum = sum + i;
        i = i - 1;
    }
    printf("%d",sum);
}