#include<stdio.h>
int main(){
    int n,i;
    i=2;
    printf("Enter an number : ");
    scanf("%d",&n);
    if(n<=1)
    {
        printf("Not Prime");
        goto End;
    }
    Loop:
    if(i<n)
    {
        if(n%i==0)
        {
            printf("Not Prime");
            goto End;
        }
        i++;
        goto Loop;
    }
    End:
    return 0;
}