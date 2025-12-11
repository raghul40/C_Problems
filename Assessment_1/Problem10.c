#include<stdio.h>
int main(){
    int num,a,b;
    printf("Enter an three digit number:");
    scanf("%d",&num);
    a=num%100;
    b=a/10;
    printf("Result:%d",b);
}