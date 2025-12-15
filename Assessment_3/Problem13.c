#include<stdio.h>
int main(){
    int num,a,digit0,digit1;
    printf("Enter an four-digit number:");
    scanf("%d",&num);
    digit0=num%10;
    a=num%100;
    digit1=a/10;
    if(digit0==digit1){
        printf("Success");
    }
    else{
        printf("Failure");
    }
}