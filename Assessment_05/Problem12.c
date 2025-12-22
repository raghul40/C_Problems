#include<stdio.h>
int main(){
    int num,sum,digit;
    sum = 0;
    printf("Enter an number : ");
    scanf("%d",&num);
    for(;num!=0;num/=10){
         digit=num%10;
         sum=sum+digit;
    }
    printf("%d",sum);
}