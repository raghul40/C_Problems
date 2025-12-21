#include<stdio.h>
int main(){
    int i,d1,d0,sum;
    sum=0;
    for(i=10;i<=99;i++){
        sum=(i/10) + (i%10);
        if(sum == 6 ){
            if(i%2 == 0){
                  printf("%d\n",i);
            }
        }
    }
}