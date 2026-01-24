#include <stdio.h>
int main() {
    char num[60];
    int i = 0, j = 0;
    printf("Enter a number string : ");
    scanf("%s", num);
    while(num[i] == '0') 
    {
        i++;
    }
    if(num[i] == '\0')
    {
        printf("0");
        return 0;
    }
    while(num[i] != '\0') 
    {
        num[j] = num[i];
        i++;
        j++;
    }
    num[j] = '\0';
    printf("After removing leading zeros: %s", num);
}