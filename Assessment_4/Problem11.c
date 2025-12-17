#include<stdio.h>
int main(){
    int a,count;
    count=0;
    printf("Enter a number: ");
    scanf("%d",&a);
    Loop:
      if(a == 0)
      {
        if(count == 0)
           count = 1;
           goto Print;
      }
      if(a != 0)
      {
        count++;
        a = a / 10;
        goto Loop; 
      }
      Print:
      printf("%d",count);
}