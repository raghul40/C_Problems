#include<stdio.h>
int main()
{
    int a,b,lcm;
    printf("Enter number 1 : ");
    scanf("%d",&a);
    printf("Enter number 2 : ");
    scanf("%d",&b);
    lcm =(a<b)?a:b;
    while(1)
    {
        if((lcm % a == 0) && (lcm % b == 0))
        {
           printf("%d",lcm); 
           goto end;
        }
        lcm++;
    }
    end:
    return 0;
}