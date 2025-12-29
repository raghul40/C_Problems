#include<stdio.h>
int main(){
    int num,d,count=0;
    printf("Enter an number : ");
    scanf("%d",&num);
    for(;num>=10;num/=10)
    {
        d = num % 100 ;
        if (d % 2 != 0)
        {
            count = count + 1;
        }
    }
    printf("%d",count);
}
