#include<stdio.h>
int main(){
    int num,d0,d1,d2,d3,first,last;
    printf("Enter a four-digit number:");
    scanf("%d",&num);
    d0=num%10;
    d1=(num%100)/10;
    d2=(num%1000)/100;
    d3=num/1000;
    first=(d1*10)+d0;
    last=(d3*10)+d2;
    if(first==last){
        printf("Success");
    }
    else{
        printf("Failure");
    }
}