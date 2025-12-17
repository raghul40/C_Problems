#include<stdio.h>
int main(){
    int a,rev,digit;
    rev=0;
    printf("Enter a number: ");
    scanf("%d",&a);
    if(a == 0)
    {
        rev = 0;
        goto Print;
    }
    Loop:
        if(a != 0)
        {
            digit = a % 10;
            rev = rev * 10 + digit;
            a = a / 10;
            goto Loop; 
        }
    Print:
    printf("%d",rev);
}