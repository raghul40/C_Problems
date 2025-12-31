#include<stdio.h>
int main()
{
    int n,t,p,first,res;
    res = 0;
    p = 1;
    printf("Enter an number : ");
    scanf("%d",&n);
    t = n;
    while(n >10)
    {
        p = p * 10;
        n = n / 10;
    }
    first = n ;
    if(first % 2 == 0)
    {
        res = t ;
        goto Print;
    }
    res = t - p ;
    Print:
    printf("%d",res);
}