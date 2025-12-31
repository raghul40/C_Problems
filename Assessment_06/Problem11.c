#include<stdio.h>
int main()
{
    int n,count;
    count=0;
    printf("Enter an number : ");
    scanf("%d",&n);
    while(n > 0)
    {
        count = count + 1 ;
        n = n / 10;
    }
    printf("%d",count);
}