#include<stdio.h>
int main()
{
    int b;
    b=1;
    Loop:if(b<6)
    {
        printf("%d\n",b);
        b=b+1;
        goto Loop;
    }
}
