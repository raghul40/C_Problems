#include<stdio.h>
int  main(){
    int i,sum;
    i=1;
    sum=0;
    Loop:
    sum=sum+i;
    i++;
    if(i<=5)
        goto Loop;
        printf("%d",sum);
}