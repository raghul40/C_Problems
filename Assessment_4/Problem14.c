#include<stdio.h>
int main(){
    int n,first,middle,last,temp,result,a;
    a=1;
    printf("Enter an number : ");
    scanf("%d",&n);
    temp=n;
    last=n%10;
    First:
    if(temp>=10){
        temp=temp/10;
        a=a*10;
        goto First;
    }
    first=temp;
    middle=(n%a)/10;
    result=(last*a) + (middle*10) + first;
    printf("%d",result);
    return 0;
}