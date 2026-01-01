#include<stdio.h>
int main()
{
    int n,i,digits;
    printf("Enter an number : ");
    scanf("%d",&n);
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
    return 0;
}