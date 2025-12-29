#include<stdio.h>
int main()
{
    int num,d;
    d=2;
    printf("Enter an number : ");
    scanf("%d",&num);
    if(num < 0)
    {
        printf("Not Prime");
        goto last;
    }
    Loop:if(d<num){
        if(num%d == 0)
        {
            printf("Not Prime");
            goto last;
        }
        d++;
        goto Loop;
    }
    printf("Prime");
    last:return 0;
}
