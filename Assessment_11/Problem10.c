#include <stdio.h>
void strcon(char *src1, char *src2, char *dst)
{
    while(*src1 != '\0') 
    {
        *dst = *src1;
        src1++;
        dst++;
    }
    while(*src2 != '\0')
    {
        *dst = *src2;
        src2++;
        dst++;
    }
    *dst = '\0';
}
int main() {
    char s1[100], s2[100], result[200];
    printf("Enter first string: ");
    fgets(s1, sizeof(s1), stdin);
    printf("Enter second string: ");
    fgets(s2, sizeof(s2), stdin);
    for(int i = 0; s1[i] != '\0'; i++)
    {
        if(s1[i] == '\n') { s1[i] = '\0'; break; }
    }
    for(int i = 0; s2[i] != '\0'; i++)
    {
        if(s2[i] == '\n') { s2[i] = '\0'; break; }
    }
    strcon(s1, s2, result);
    printf("Concatenated string: %s", result);
}
