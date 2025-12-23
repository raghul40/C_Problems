#include<stdio.h>
int main(){
    int num,a,temp,first,middle,last,result;
    a=1;
    result=0;
    printf("Enter an number : ");
    scanf("%d",&num);
    temp = num;
    last=num%10;
    for(;temp>=10;temp/=10)
    {
        a = a * 10 ;
    }
    first = temp ;
    middle = (num%a)/10;
    result = (last*a)+(middle*10)+first;
    printf("%d",result);
    
}
