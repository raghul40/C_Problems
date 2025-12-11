#include<stdio.h>
int main(){
    int num,ones;
    printf("Enter an three-digit number:");
    scanf("%d",&num);
    ones=num%10;
    printf("Result:%d",ones);
    return 0;
}