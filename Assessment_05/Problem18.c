#include<stdio.h>
int main(){
    int n,i,flag,last;
    flag = 0 ;
    printf("Enter an number : " );
    scanf("%d",&n);
    last = n % 100 ;
    if(last <= 1){
        printf(" Not Prime");
        return 0 ;
    }
    for(i=2;i<last;i++){
        if(last % i == 0){
            flag = 1 ;
        }
    }
    if(flag == 0){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
}
