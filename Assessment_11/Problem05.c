#include <stdio.h>
void memcopy(int *src, int *dst, int size)
 {
    int i;
    for(i = 0; i < size; i++)
    {
        *(dst + i) = *(src + i);
    }
}
int main()
{
    int src[5], dst[5];
    int i;
    printf("Enter 5 integers:\n");
    for(i = 0; i < 5; i++) 
    {
        scanf("%d", &src[i]);
    }
    memcopy(src, dst, 5);
    printf("Destination array after copy:\n");
    for(i = 0; i < 5; i++)
    {
        printf("%d ", dst[i]);
    }
}