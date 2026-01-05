#include<stdio.h>
void check_first_2digits_prime(int);
int main()
{
    int x;
    scanf("%d",&x);
    check_first_2digits_prime(x);
}
void check_first_2digits_prime(int x)
{
    int n,i,digits;
    n = x;
    i = 2;
    digits = n % 100;
    while(digits < 0){
        printf("Not Prime");
        goto end;
    }
    while(i < digits)
    {
        if(digits % i == 0)
        {
            printf("Not Prime");
            goto end;
        }
        i = i + 1;
    }
    printf("Prime");
    end:
}