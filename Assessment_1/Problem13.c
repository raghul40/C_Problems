#include<stdio.h>
int main(){
    int num,d1,d2,rev;
    printf("Enter an two digit number:");
    scanf("%d",&num);
    d1=num/10;
    d2=num%10;
    rev=(d2*10)+d1;
    printf("The reversed number is:%d",rev);
}