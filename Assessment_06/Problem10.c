#include<stdio.h>
int main()
{
    int i,sum,tens;
    i = 11;
    sum = 0;
    while(i<=99)
    {
        tens = i / 10;
        if((tens == 7) && (i % 2 != 0 ))
        {
            sum = sum + i;
        }
        i=i+2;
    }
    printf("%d",sum);
}