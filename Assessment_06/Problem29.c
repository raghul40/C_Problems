#include<stdio.h>
int main()
{
    int a,b,c,lcm;
    printf("Enter an number 1 : ");
    scanf("%d",&a);
    printf("Enter an number 2 : ");
    scanf("%d",&b);
    printf("Enter an number 3 : ");
    scanf("%d",&c);
    lcm =(a<b)?a:b || (a<c)?a:c ;
    while(1)
    {
        if((lcm % a == 0) && (lcm % b == 0) && (lcm % c == 0))
        {
           printf("%d",lcm); 
           goto end;
        }
        lcm++;
    }
    end:
    return 0;
}