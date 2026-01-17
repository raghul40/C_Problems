#include <stdio.h>
int main() {
    int a[5],b[5];
    int i,j = 0;
    int n,k,flag;
    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++) 
    {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < 5; i++)
    {
        n = a[i];
        flag = 1; 
        if(n <= 1)
        {
            flag = 0;
        }
        for(k = 2; k <= n/2; k++) {
            if(n % k == 0) {
                flag = 0;
                break;
            }
        }
        if(flag == 0) 
        {
            b[j] = n;
            j++;
        }
    }
    printf("Numbers after removing prime numbers:\n");
    for(i = 0; i < j; i++)
    {
        printf("%d\t",b[i]);
    }
}