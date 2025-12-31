#include<stdio.h>
int main()
{
    int i,sum,ones;
    i = 10;
    sum = 0;
    while(i<99)
    {
        ones = i % 10;
        if(ones == 5){
            sum = sum + i;
        }
        i = i + 5;
    }
    printf("%d",sum);
}