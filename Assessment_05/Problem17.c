#include <stdio.h>
int main()
{
    int n, i, count = 0;
    int temp,digit,sum = 0;
    printf("Enter an number : ");
    scanf("%d", &n);
    for(i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            count = 1;
            break;
        }
    }
    temp = n;
    for( ; temp > 0 ;temp/=10)
    {
        digit = temp % 10 ;
        sum = sum + digit;
    }
    /* Final Output */
    if(count == 0 && sum == 14)
        printf("Prime & sum of digits is 14");
    else if(count != 0 && sum == 14)
        printf("Not Prime but sum of digits is 14");
    else if(count == 0 && sum != 14)
        printf("Prime & sum of digits is not 14");
    else
        printf("Not Prime & sum of digits is not 14");

    return 0;
}

