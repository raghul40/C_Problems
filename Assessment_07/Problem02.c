#include<stdio.h>
void disp_descend(int);
int main()
{
    int x;
    scanf("%d",&x);
    disp_descend(x);
}
void disp_descend(int x)
{
    int i;
    for(i=x;i>=1;i--)
    {
        printf("%d\n",i);
    }
}