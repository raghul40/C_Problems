#include<stdio.h>
int main()
{
    int a[100];
    int num,i,count,sum;
    i=0;
    sum=0;
    count=0;
    printf("Enter numbers : \n");
    while(1)
    {
        scanf("%d", &num);
        if(num == 0)
        {
            break;
        }
        a[i] = num;
        sum = sum + num;
        count = count + 1;
        i = i + 1;
    }
    printf("\nTotal Numbers : %d",count);
    printf("\nSum:%d",sum);
}