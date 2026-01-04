#include<stdio.h>
void check_last_digit_odd(int);
int main()
{
    int x;
    scanf("%d",&x);
    check_last_digit_odd(x);
}
void check_last_digit_odd(int x)
{
    int n,a,temp,last,result=0;
    a = 1;
    n = x;
    temp = n ;
    while(n > 10)
    {
        a = a * 10 ;
        n = n / 10 ;
    }
    last = n ;
    if(last % 2 != 0)
    {
        result = temp - a ;
    }
    else
    {
        result = temp;
    }
    printf("%d",result);
}