#include<stdio.h>
int main(){
    int num,result;
    printf("Enter an three digit number:");
    scanf("%d",&num);
    result=num/100;
    printf("The hundreds digit is:%d",result);
}