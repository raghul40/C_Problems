#include<stdio.h>
int main(){
    int num,d1,d2,d3,d4,rev;
    printf("Enter an four-digit number:");
    scanf("%d",&num);
    d1=num/1000;
    d2=(num%1000)/100;
    d3=(num%100)/10;
    d4=num%10;
    rev=(d1*1000)+(d2*100)+(d4*10)+d3;
    printf("Result:%d",rev);
}