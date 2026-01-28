#include <stdio.h>
int strcomp(char *src,char *dst) 
{
    while(*src != '\0' || *dst != '\0')
    {
        if(*src != *dst) 
        {
            return 0;   
        }
        src++;
        dst++;
    }
    return 1;  
}
int main()
{
    char s1[100], s2[100];
    printf("Enter first string: ");
    fgets(s1, sizeof(s1), stdin);
    printf("Enter second string: ");
    fgets(s2, sizeof(s2), stdin);
    int result = strcomp(s1, s2);
    if(result == 1)
    {
        printf("Success");
    }
    else
    {
        printf("Failure");
    }
}
