#include<stdio.h>
int main()
{
    int a;
    a = 9999;
    while(a >= 1000)
    {
        if((a % 7 == 0) && (a % 9 == 0))
        {
            printf("%d",a);
            goto end;
        }
        a = a - 1 ;
    }
    end:
    return 0;
}