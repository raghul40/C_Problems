#include<stdio.h>
int main()
{
    int a,count;
    count = 0 ;
    a=2;
    while(a<10)
    {
        if((a == 2) || (a == 3) || (a == 5) || (a == 7))
        {
            count = count + 1;
        }
        a = a + 1;
    }
    printf("%d",count);
}