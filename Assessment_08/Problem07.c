#include<stdio.h>
int disp_reverse_number(int);
int main()
{
    int x,y;
    scanf("%d", &x);
    y = disp_reverse_number(x);
    printf("%d",y);
}
int disp_reverse_number(int a)
{
    int digit,rev;
    rev = 0;
    while(a > 0)
    {
        digit = a % 10;
        rev = (rev*10) + digit;
        a = a / 10;
    }
    return rev;
}