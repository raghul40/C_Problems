#include<stdio.h>
int main()
{
    int b,sum;
    sum=0;
    b=1;
    Loop:if(b<6)
    {
        sum = sum + b;
        b=b+1;
        goto Loop;
    }
    printf("%d",sum);
}
