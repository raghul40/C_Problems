#include<stdio.h>
int main()
{
    int d;
    d=5;
    Loop:if(d>0)
    {
        printf("%d\n",d);
        d=d-1;
        goto Loop;
    }
}
