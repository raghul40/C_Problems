#include <stdio.h>
int disp_2digit_ones5(int);
int main()
{
    int x, y;
    scanf("%d", &x);
    y = disp_2digit_ones5(x);
    printf("%d",y);
}
int disp_2digit_ones5(int a)
{
    int n,ones,sum = 0;
    for(n = 10;n <= 99 ; n++)
    {
        ones = n % 10 ;
        if(ones == 5)
        {
            sum = sum + n;
        }
    }
    return sum;
}