#include <stdio.h>
void disp_count_HCF2(int,int);
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    disp_count_HCF2(x,y);    
}
void disp_count_HCF2(int x,int y)
{
    int a,b,i,hcf;
    a = x;
    b = y;
    hcf = 1;
    i = 1;
    while((i <= a) && (i <= b))
    {
        if((a % i == 0) && (b % i == 0))
        {
           hcf = i;
        }
        i = i + 1;
    }
    printf("%d",hcf);
}