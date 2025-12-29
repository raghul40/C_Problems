#include <stdio.h>
int main()
{
    int i, count = 0;
    for(i = 2; i <= 9; i++)
    {
        if(i == 2 || i == 3 || i == 5 || i == 7)
        {
            count = count + 1;
        }
    }
    printf("%d", count);
    return 0;
}
