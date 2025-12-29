#include<stdio.h>
int main(){
    int num,i,last;
    printf("Enter an 4-digit number : ");
    scanf("%d",&num);
    last = (num % 1000)/10 ;
    if(last<0){
        printf("Not Prime");
        goto end;
    }
    for(i=2;i<last;i++)
    {
        if(last % i == 0)
        {
            printf("Not Prime");
            goto end;
        }
    }
    printf("Prime");
    end:
    return 0;
}

