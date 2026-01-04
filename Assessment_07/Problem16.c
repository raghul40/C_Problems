#include<stdio.h>
void check_prime(int);
int main()
{
    int x;
    scanf("%d",&x);
    check_prime(x);
}
void check_prime(int x)
{
    int n,i;
    n = x;
    if(n<0)
    {
        printf("Not Prime");
        goto end;
    }
    for(i=2;i<n;i++)
    {
        if(n % i == 0)
        {
            printf("Not Prime");
            goto end;
        }
    }
    printf("Prime");
    end:
}