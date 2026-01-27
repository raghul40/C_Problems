#include <stdio.h>
int memcomp(int *src,int *dst,int size) 
{
    int i;
    for(i = 0;i < size;i++)
    {
        if(*(src + i) != *(dst + i))
        {
            return 0;  
        }
    }
    return 1;  
}
int main() 
{
    int a[5], b[5];
    int i,result;
    printf("Enter 5 elements for first array:\n");
    for(i = 0;i < 5;i++) 
    {
        scanf("%d",&a[i]);
    }
    printf("Enter 5 elements for second array:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d",&b[i]);
    }
    result = memcomp(a,b,5);
    if(result == 1)
    {
        printf("Success");
    }
    else
    {
        printf("Failure");
    }
}