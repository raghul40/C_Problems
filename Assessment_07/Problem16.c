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
    int num,i;
    num = x;
    if(num<0)
    {
        printf("Not Prime");
        goto end;
    }
    for(i=2;i<num;i++)
    {
        if(num % i == 0)
        {
            printf("Not Prime");
            goto end;
        }
    }
    printf("Prime");
    end:
}