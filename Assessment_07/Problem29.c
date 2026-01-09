#include <stdio.h>
void disp_LCM3(int,int,int);
int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    disp_LCM3(x,y,z);    
}
void disp_LCM3(int x,int y,int z)
{
    int a,b,c,lcm;
    a = x;
    b = y;
    c = z;
    lcm = (a<b)?a:b || (a<c)?a:c ;
    while(1)
    {
        if((lcm % a == 0) && (lcm % b == 0) && (lcm % c == 0))
        {
           printf("%d",lcm);
           goto end;
        }
        lcm = lcm + 1;
    }
    end:
}