#include<stdio.h>
int main(){
    int i;
    i=11;
    Loop:
    if(i%2!=0)
        printf("%d\n",i);
    i++;
    if(i<20)
        goto Loop;
    return 0;
}