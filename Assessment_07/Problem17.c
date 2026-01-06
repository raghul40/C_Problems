#include<stdio.h>
void check_prime_and_sum14(int);
int main()
{
    int x;
    scanf("%d",&x);
    check_prime_and_sum14(x);
}
void check_prime_and_sum14(int x)
{
    int num,i,digit,count,sum;
    num = x ;
    digit = 0 ;
    count = 0;
    sum = 0 ;
    i = 2 ;
    while(i < num)
    {
        if(num % i == 0)
        {
            count = 1; 
        }
        i = i + 1;
    }
    while(num > 0)
    {
        digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }
    if((count == 0) && (sum == 14))
    {
        printf("Prime & Sum of digits is 14");
    }
     if((count != 0) && (sum == 14))
    {
        printf("Not Prime but Sum of digits is 14");
    }
     if((count == 0) && (sum != 14))
    {
        printf("Prime & Sum of digits is not 14");
    }
     if((count != 0) && (sum != 14))
    {
        printf(" Not Prime & Sum of digits is not 14");
    } 
}