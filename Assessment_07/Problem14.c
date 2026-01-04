#include<stdio.h>
void disp_interchange_first_last_digit(int);
int main()
{
    int x;
    scanf("%d",&x);
    disp_interchange_first_last_digit(x);
}
void disp_interchange_first_last_digit(int x)
{
    int n,a,temp,first,mid,last,result=0;
    a = 1;
    n = x;
    temp = n ;
    last = n % 10 ;
    while(n > 10)
    {
        a = a * 10 ;
        n = n / 10 ;
    }
    first = n ;
    mid = (temp % a) / 10 ;
    last = last * a ;
    result = last + (mid*10) + first ;
    printf("%d",result);
}