#include<stdio.h>
int main()
{
    int i,count;
    count=0;
    printf("Enter an number: ");
    scanf("%d",&i);
    for(;i!=0;i/=10)
    {
        count++;
    }
    printf("%d",count);
}