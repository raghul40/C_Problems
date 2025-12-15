#include<stdio.h>
int main(){
    int num,digit0,digit1;
    printf("Enter an two-digit number : ");
    scanf("%d",&num);
    digit0=num%10;
    digit1=num/10;
    if(digit0<digit1){
        printf("Success");
    }
    else{
        printf("Failure");
    }
}