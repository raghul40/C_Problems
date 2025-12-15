#include<stdio.h>
int main(){
    int i=1;
    Loop:
    printf("%d\n",i);
    i++;
    if(i<=5)
        goto Loop;
    return 0;
}