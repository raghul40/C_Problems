#include<stdio.h>
int main()
{
    int n,d0,d1,sum;
    n = 11;
    Loop:if(n > 10)
    {
        d0 = n % 10;
        d1 = n / 10;
        sum = d0 + d1;
        if(sum == 6 && n % 2 == 0)
        {
            printf("%d\n",n);
        }
        n++;
        goto Loop;
    }
}
