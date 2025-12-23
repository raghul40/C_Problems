#include <stdio.h>
int main()
{
    int n,i,b,sum,temp;
    b = 0;
    printf("Enter an number : ");
    scanf("%d",&n);
    temp = n;
    for (; temp > 0;temp/=10)
    {
        sum = sum + (temp % 10);
    }
    if (n <= 1)
    {
        printf("Not Prime");
    }
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            b = 1;
        }
    }
    if (b == 0){
        printf("Prime");
        if(sum == 14){
            printf(" & Sum of digits is %d",sum);
        }
    }
    else{
        printf("Not Prime");
    }
}
