#include<stdio.h>
int main()
{
    int n,sum,digit;
    printf("Enter an number : ");
    scanf("%d",&n);
    sum = 0;
    while(n > 0)
    {
        digit = n % 10 ;
        sum = sum + digit ;
        n = n / 10 ;
    }
    printf("%d",sum);
}