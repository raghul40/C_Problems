#include<stdio.h>
int main()
{
    int i;
    i=5;
    Loop:
    printf("%d\n",i);
    i--;
    if(i>=1)
        goto Loop;
}