#include <stdio.h>
void find_2digit_odd_sum7(int *arr, int *count)
{
    int i, tens, ones;
    *count = 0;
    for(i = 11; i <= 99; i++) 
    {
        if(i % 2 != 0)
        {             
            tens = i / 10;
            ones = i % 10;
            if(tens + ones == 7) 
            {
                arr[*count] = i;     
                (*count)++;
            }
        }
    }
}
int main() 
{
    int result[10];
    int count, i;
    find_2digit_odd_sum7(result, &count);
    printf("Answer: ");
    for(i = 0; i < count; i++)
    {
        printf("%d", result[i]);
        if(i < count - 1)
            printf(", ");
    }
}