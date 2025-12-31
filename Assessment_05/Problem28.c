#include<stdio.h>
int main()
{
    int a,b,lcm;
    printf("Enter an number 1 : ");
    scanf("%d",&a);
    printf("Enter an number 2 : ");
    scanf("%d",&b);
    for(lcm = (a<b)?a:b; ;lcm++)
    {
        if((lcm % a == 0) && (lcm % b == 0))
        {
            printf("%d",lcm);
            goto end;
        }
    }
    end:
    return 0;
}
