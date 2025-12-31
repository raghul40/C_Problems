#include<stdio.h>
int main()
{
    int n,d,sum;
    n = 11;
    sum = 0;
    Loop:if(n > 10)
    {
        d = n / 10;
        if(n % 2 != 0 && d == 7)
        {
            sum = sum + n ;
        }
        n = n + 1;
        goto Loop;
    }  
    printf("%d",sum);
}
