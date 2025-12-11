#include<stdio.h>
int main(){
    int num,a,d1,d2,d3,sum;
    printf("Enter an three-digit number:");
    scanf("%d",&num);
    d1=num/100;
    a=num%100;
    d2=a/10;
    d3=a%10;
    sum=d1+d2+d3;
    printf("Sum of digits:%d",sum);
}