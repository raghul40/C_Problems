#include<stdio.h>
int main(){
    int i,sum,res;
    sum=0;
    for(i=1;i<=5;i++)
    {
        sum = sum + i;
        res = sum;
    }
    printf("%d\n",res);
}