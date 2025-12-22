#include<stdio.h>
int main(){
    int num,rev,digit;
    rev = 0;
    printf("Enter an number : ");
    scanf("%d",&num);
    for(;num!=0;num/=10){
         digit=num % 10;
         rev = rev*10 + digit;
    }
    printf("%d",rev);
}