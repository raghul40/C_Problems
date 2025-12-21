#include<stdio.h>
int main(){
    int i,sum,result;
    sum=0;
    for(i=6;i>=1;i--)
    {
        sum = sum + i;
        result = sum;
    }
    printf("%d",result);
}