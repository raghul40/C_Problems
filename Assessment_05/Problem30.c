#include<stdio.h>
int main()
{
    int a,b,i,hcf=1;
    printf("Enter an number 1 : ");
    scanf("%d",&a);
    printf("Enter an number 2 : ");
    scanf("%d",&b);
    for(i=1;(i<=a)&& (i<=b);i++)
    {
        if((a % i == 0) && (b % i == 0))
        {
            hcf = i;
        }
    }
    printf("%d",hcf);
}
