#include <stdio.h>
int main() {
    char str[50];
    int i = 0,num = 0;
    printf("Enter a number as string: ");
    scanf("%s", str);
    while (str[i] != '\0')
    {
        num = num * 10 + (str[i] - '0');
        i++;
    }
    printf("Integer value = %d",num);
}