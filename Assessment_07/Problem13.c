#include<stdio.h>
void disp_reverse_number(int);
int main()
{
    int x;
    scanf("%d",&x);
    disp_reverse_number(x);
}
void disp_reverse_number(int x)
{
    int num,rev,digits;
    num = x;
    rev = 0 ;
    while(num > 0)
    {
        digits = num % 10;
        rev = (rev*10) + digits;
        num = num / 10;
    }
    printf("%d",rev);
}