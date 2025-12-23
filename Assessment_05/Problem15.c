#include<stdio.h>
int main(){
    int num,a,temp,first,result;
    a=1;
    result=0;
    printf("Enter an number : ");
    scanf("%d",&num);
    temp = num;
    for(;temp>=10;temp/=10)
    {
        a = a * 10 ;
    }
    first = temp ;
    if(first%2 == 0){
        result = num ;
    }
    if(first%2 != 0){
        result = num - a ;
    }
    printf("%d",result);
    
}
