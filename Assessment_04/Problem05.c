#include<stdio.h>
int main(){
    int i;
    i=1;
    Loop:
    if(i%2!=0)
        printf("%d\n",i);
    i++;

    if(i<=9)
        goto Loop;
    return 0;
}