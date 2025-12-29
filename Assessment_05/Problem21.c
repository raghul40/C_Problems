#include<stdio.h>
int main(){
    int num,d,count=0;
    printf("Enter an number : ");
    scanf("%d",&num);
    for(;num>0;num/=10)
    {
        d = num % 10 ;
        if (d % 2 != 0)
        {
            count = count + 1;
        }
    }
    printf("%d",count);
}
