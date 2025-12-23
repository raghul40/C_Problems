#include <stdio.h>
int main()
{
    int n, i, flag = 0;
    printf("Enter an number : ");
    scanf("%d",&n);
    if (n <= 1)
    {
        printf("Not Prime");
        return 0;
    }
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
        }
    }
    if (flag == 0)
        printf("Prime");
    else
        printf("Not Prime");
    return 0;
}
