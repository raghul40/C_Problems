#include<stdio.h>
int main()
{
    int num,i,digit,count=0;
    printf("Enter an number : ");
    scanf("%d",&num);
    for(i=2;i<num;)
    {
        digit = num % 10;
        if((digit==2) || (digit==3) || (digit==5) || (digit==7))
        {
            count = count + 1;
        }
        num = num /10 ;
    }
    printf("%d",count);
}
