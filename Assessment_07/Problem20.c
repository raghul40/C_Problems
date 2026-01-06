#include <stdio.h>
void disp_2digit_even_sum6(int);
int main()
{
    int x;
    scanf("%d", &x);    
    disp_2digit_even_sum6(x);
}
void disp_2digit_even_sum6(int x)
{
    int i, count = 0;
    i = x;
    for(; i <= 9; i++)
    {
        if(i == 2 || i == 3 || i == 5 || i == 7)
        {
            count = count + 1;
        }
    }
    printf("%d", count);
}