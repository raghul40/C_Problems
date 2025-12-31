#include<stdio.h>
int main()
{
    int n,t,p,first,mid,last,res;
    res = 0;
    p = 1;
    printf("Enter an number : ");
    scanf("%d",&n);
    t = n;
    last = n % 10 ;
    while(n >10)
    {
        p = p * 10;
        n = n / 10;
    }
    first = n ;
    mid = (t % p) / 10;
    last = last * p ;
    res = last + (mid * 10) + first;
    printf("%d",res);
}