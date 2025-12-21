#include<stdio.h>
int main(){
    int num,digit1,digit2,digit3,result;
    printf("Enter an three-digit number:");
    scanf("%d",&num);
    digit1=num/100;
    digit2=(num%100)/10;
    digit3=2;
    result=(digit1*100)+(digit2*10)+digit3;
    printf("Result:%d",result);
}