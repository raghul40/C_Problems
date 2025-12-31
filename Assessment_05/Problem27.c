#include<stdio.h>
int main()
{
    int n,i,count,sum;
    count = 0;
    for(i=0;i<100000;i++)
    {
        n = i;
        sum = 0;
        for(;n>0;n/=10)
        {
            sum = sum + (n % 10);
        }
        if(sum == 14){
            count = count + 1;
        }
    }
    printf("%d",count);
}
