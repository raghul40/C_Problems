#include<stdio.h>
int main(){
    int num,i,flag,temp,mid;
    flag=0;
    printf("Enter an 4-digit number :" );
    scanf("%d",&num);
    temp = num / 10;
    mid = temp % 100;
    if(mid<=1){
        printf("Not Prime");
        goto End;
    }
    for(i=2;i<mid;i++){
        if(mid%i == 0){
            flag = 1;
        }
    }
    if(flag == 0){
        printf("Prime");
        goto End;
    }
    else{
        printf("Not Prime");
        goto End;
    }
    End:
    return 0 ;
}
