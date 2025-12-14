#include<stdio.h>
int main(){
    int num,digit0,digit1,result;
    printf("Enter an two-digit number:");
    scanf("%d",&num);
    digit0=num%10;
    digit1=num/10;
    result=(digit0>digit1)?1:0;
    printf("Result is:%d",result);
}