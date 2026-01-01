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
    int y;
    for(y=1;y<6;y++)
    {
        printf("%d\n",y);
    }
}