#include<stdio.h>
int main(){
    int num,d0,d1,d2,d3,first,last,result;
    printf("Enter a four-digit number:");
    scanf("%d",&num);
    d0=num%10;
    d1=(num/10)%10;
    d2=(num/100)%10;
    d3=num/1000;
    first=(d1*10)+d0;
    last=(d3*10)+d2;
    result=(first==last)?1:0;
    printf("Result:%d",result);
}