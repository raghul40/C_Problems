#include <stdio.h>
int disp_2digit_odd_sum_tens7(int);
int main()
{
    int x, y;
    scanf("%d", &x);
    y = disp_2digit_odd_sum_tens7(x);
    printf("%d",y);
}
int disp_2digit_odd_sum_tens7(int a)
{
    int n,tens,sum = 0;
    for(n = 10;n <= 99 ; n++)
    {
        tens = n / 10 ;
        if((tens == 7) && (n % 2 != 0))
        {
            sum = sum + n;
        }
    }
    return sum;
}