#include<stdio.h>
int main(){
    int num,count,temp,digit;
    count = 0;
    printf("Enter an number : ");
    scanf("%d",&num);
    temp = num ;
    for(;temp>0;)
    {
        digit = temp % 10;
        if(digit % 2 != 0)
        {
            count = count + 1;
        }
        temp = temp / 10;
    }
    printf("%d",count);
    return 0;
}
