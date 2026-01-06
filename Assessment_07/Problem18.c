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
    int n,a,digits;
    n = x;
    a = 2;
    digits = n % 100;
    while(digits < 0){
        printf("Not Prime");
        goto end;
    }
    while(a < digits)
    {
        if(digits % a == 0)
        {
            printf("Not Prime");
            goto end;
        }
        a = a + 1;
    }
    printf("Prime");
    end:
}