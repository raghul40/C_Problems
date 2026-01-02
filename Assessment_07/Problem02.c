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
    int y;
    for(y=x;y>=1;y--)
    {
        printf("%d\n",y);
    }
}