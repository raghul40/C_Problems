#include<stdio.h>
int main()
{
    int n,i,digit,count,sum;
    printf("Enter an number : ");
    scanf("%d",&n);
    count = 0;
    sum = 0 ;
    i = 2 ;
    while(i < n)
    {
        if(n % i == 0)
        {
            count = 1;
            break;
        }
        i = i + 1;
    }
    while(n > 10)
    {
        digit = n % 10;
        sum = sum + digit;
        n = n / 10;
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