#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter an number : ");
    scanf("%d",&n);
    i = 2;
    while(n<0){
        printf("Not Prime");
        goto end;
    }
    while(i<n)
    {
        if(n % i == 0)
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