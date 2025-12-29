#include<stdio.h>
int main(){
    int n,first,temp,res,d;
    d= 1;
    printf("Enter an number : ");
    scanf("%d",&n);
    temp = n;
    Loop:
    if(n>=10){
        n = n/10;
        d = d*10;
        goto Loop;
    }
    first = n;
    if(first%2 != 0)
    {
        res = temp - d;
    }
    printf("%d",res);
}
