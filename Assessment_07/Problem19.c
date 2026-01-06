#include<stdio.h>
void middle_2digits_prime(int);
int main()
{
    int x;
    scanf("%d",&x);
    middle_2digits_prime(x);
}
void middle_2digits_prime(int x)
{
    int n,i,digits;
    n = x;
    i = 2;
    digits = (n % 1000) / 10;
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
