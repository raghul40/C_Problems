#include<stdio.h>
int main(){
    int num,digit1,digit2,result;
    printf("Enter an two-digit number:");
    scanf("%d",&num);
    digit1=1;
    digit2=num%10;
    result=(digit1*10)+digit2;
    printf("Result:%d",result);
}