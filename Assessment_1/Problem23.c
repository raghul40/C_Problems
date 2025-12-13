#include<stdio.h>
int main(){
    int num,digit1,digit2,sum,result;
    printf("Enter an two-digit number:");
    scanf("%d",&num);
    digit1=num/10;
    digit2=num%10;
    sum=digit1+digit2;
    result=num-(sum%2)*5;
    printf("Result:%d",result);
    return 0;
}