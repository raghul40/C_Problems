#include<stdio.h>
int main(){
    int num,tens;
    printf("Enter an two-digit number:");
    scanf("%d",&num);
    tens=num/10;
    printf("Result:%d",tens);
    return 0;
}