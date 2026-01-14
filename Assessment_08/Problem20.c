#include<stdio.h>
int disp_count_HCF2(int,int);
int main()
{
    int x,y,z;
    scanf("%d",&x);
    scanf("%d",&y);
    z = disp_count_HCF2(x,y);
    printf("%d",z);
}
int disp_count_HCF2(int a,int b)
{
    int i,hcf;
    i = 1;
    hcf = 1;
    while((i <= a) && (i <= b))
    {
        if((a % i == 0) && (b % i == 0))
        {
           hcf = i;
        }
        i = i + 1;
    }
    return(hcf);
}