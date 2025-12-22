#include<stdio.h>
int main(){
    int i,sum,d1;
    sum = 0;
    for(i=11;i<=99;i++)
    {
        d1 = i / 10;
        if(d1 == 7){
            if(i%2 != 0){
                 sum = sum + i;
            }
        }
    }
    printf("%d\n",sum);
}