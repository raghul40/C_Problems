#include<stdio.h>
int main()
{
    int n,original,first,mid,last,d,result;
    d=1;
    printf("Enter an number : ");
    scanf("%d",&n);
    original = n;
    last = n % 10;
    Loop:if(n>=10)
    {
        n = n / 10;
        d = d * 10;
        goto Loop;
    }
    last = last * d;
    first = n;
    mid = (original % d) / 10 ;
    result = last + (mid*10) + first;
    printf("%d",result);
}
