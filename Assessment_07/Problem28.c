#include <stdio.h>
void disp_LCM2(int,int);
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    disp_LCM2(x,y);    
}
void disp_LCM2(int x,int y)
{
    int a,b,lcm;
    a = x;
    b = y;
    lcm = (a<b)?a:b;
    while(1)
    {
        if((lcm % a == 0) && (lcm % b == 0))
        {
           printf("%d",lcm);
           goto end;
        }
        lcm = lcm + 1;
    }
    end:
}
