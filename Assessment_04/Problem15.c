#include<stdio.h>
int main(){
    int num,first,temp,result,a;
    a = 1;
    printf("Enter an number : ");
    scanf("%d",&num);
    temp = num;
    First:
    if(temp>=10){
        temp = temp/10;
        a = a*10;
        goto First;
    }
    first = temp;
    if(first%2 == 0){
        result = num;
        goto Print;
    }
    if(first%2 != 0){
        result = num - a;
        goto Print;
    }
    Print:
    printf("%d",result);
}