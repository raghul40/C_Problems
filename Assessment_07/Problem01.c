#include<stdio.h>
void disp_assend(int);
int main()
{
    int x;
    scanf("%d",&x);
    disp_assend(x);
}
void disp_assend(int x)
{
    int i;
    for(i=x;i<6;i++)
    {
        printf("%d\n",i);
    }
}