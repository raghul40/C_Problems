#include <stdio.h>
void strcopy(char *src, char *dst)
{
    while(*src != '\0')
    {
        *dst = *src;
        src++;
        dst++;
    }
    *dst = '\0';
}
int main()
{
    char src[100], dst[100];
    printf("Enter a string: ");
    fgets(src, sizeof(src), stdin); 
    strcopy(src, dst);
    printf(" %s", dst);
}