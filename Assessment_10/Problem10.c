#include <stdio.h>
int main() {
    char num[60];
    int i = 0, len = 0;
    char temp;
    printf("Enter a number : ");
    scanf("%s", num);
    while(num[len] != '\0') 
    {
        len++;
    }
    for(i = 0; i < len / 2; i++) 
    {
        temp = num[i];
        num[i] = num[len - i - 1];
        num[len - i - 1] = temp;
    }
    printf("%s", num);
}