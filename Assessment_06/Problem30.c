#include<stdio.h>
int main()
{
    int a,b,i,hcf;
    hcf = 1;
    i = 1;
    printf("Enter an number 1 : ");
    scanf("%d",&a);
    printf("Enter an number 2 : ");
    scanf("%d",&b);
    while((i <= a) && (i <= b))
    {
        if((a % i == 0) && (b % i == 0))
        {
           hcf = i;
        }
        i = i + 1;
    }
    printf("%d",hcf);
}