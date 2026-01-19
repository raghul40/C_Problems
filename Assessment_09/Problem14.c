#include <stdio.h>
int main() 
{
    int a[100];
    int num, count = 0;
    printf("Enter numbers :\n");
    while(1) {
        scanf("%d", &num);
        if(num == 0)
        {
            break;
        }
        a[count] = num;
        count++;
    }
    if(count == 0) {
        printf("No numbers entered");
    }
    else if(count % 2 != 0)
    {  
        printf("Middle number = %d", a[count/2]);
    }
    else {   
        int mid1 = a[(count/2) - 1];
        int mid2 = a[count/2];
        int avg = (mid1 + mid2) / 2; 
        printf("Average of middle two numbers = %d", avg);
    }
    return 0;
}