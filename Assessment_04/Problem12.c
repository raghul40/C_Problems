#include<stdio.h>
int main(){
    int a,digit,sum;
    sum=0;
    printf("Enter a number: ");
    scanf("%d",&a);
    if(a == 0)
    {
        sum = 0;
    }
    Loop:
        if(a != 0)
        {
            digit = a % 10;
            sum = sum + digit;
            a = a / 10;
            goto Loop; 
        }
        printf("%d",sum);
}