#include<stdio.h>
int main(){
    int i,d1,sum;
    i=71;
    sum=0;
    Loop:
    d1=i/10;
    if(d1==7)
        if(i%2!=0)
          sum=sum+i;
    i++;
    if(i<=79)
      goto Loop;
      
    printf("%d\n",sum);
        
    return 0;
    
}