#include<stdio.h>
int main()
{
    int a[5],b[5],i,j;
    j = 0;
    printf("Enter 5 numbers :\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Numbers after removing odd numbers are :\n");
    for(i = 0; i < 5; i++)
    {
        if( a[i] % 2 == 0 )
        {
            b[j] = a[i];
            j++;
        }
    }
    for(i = 0; i<j; i ++)
    {
        printf("%d\t",b[i]);
    }
}