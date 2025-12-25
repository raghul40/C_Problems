#include<stdio.h>
int main(){
    int i,j,count,f;
    f=0;
    for(i=2;i<=9;i++)
    {
        f = 0;
        for(j=2;j<i;j++)
        {
          if(i%j == 0)
          {
            f = 1;
          }
        }
    if(f == 0)
     {
        count = count + 1;
     }
    }
    printf("%d",count);
}
