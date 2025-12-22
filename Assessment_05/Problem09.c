#include<stdio.h>
int main(){
    int i,sum,d0;
    sum=0;
    for(i=11;i<=99;i++){
        d0=i%10;
        if(d0==5){
            sum = sum + i;
        }
    }
    printf("%d",sum);
}