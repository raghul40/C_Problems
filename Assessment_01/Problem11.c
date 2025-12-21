#include<stdio.h>
int main(){
    int num,sum,digit1,digit2;
    printf("Enter an two-digit number:");
    scanf("%d",&num);
    digit1=num%10;
    digit2=num/10;
    sum=digit1+digit2;
    printf("Sum of digits:%d",sum);
}