#include<stdio.h>
int main(){
    int i,sum;
    i=6;
    sum=0;
    Loop:
    sum=sum+i;
    i--;
    if(i>=1)
        goto Loop;
        printf("%d",sum);
}