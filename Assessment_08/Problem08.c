#include<stdio.h>
int disp_interchange_first_last_digit(int);
int main()
{
    int x,y;
    scanf("%d", &x);
    y = disp_interchange_first_last_digit(x);
    printf("%d",y);
}
int disp_interchange_first_last_digit(int a)
{
    int p,temp,first,mid,last,result=0;
    p = 1;
    temp = a ;
    last = a % 10 ;
    while(a > 10)
    {
        p = p * 10 ;
        a = a / 10 ;
    }
    first = a ;
    mid = (temp % p) / 10 ;
    last = last * p ;
    result = last + (mid*10) + first ;
    return(result);
}