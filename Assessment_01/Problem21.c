#include<stdio.h>
int main(){
    int num,result;
    printf("Enter an number:");
    scanf("%d",&num);
    result=num-(num%2)*5;
    printf("Result:%d",result);
    return 0;
}