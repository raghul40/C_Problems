#include <stdio.h>
int main() {
    char num[60];
    int i = 0, valid = 1, length = 0;
    printf("Enter a number string : ");
    scanf("%s", num);
    while(num[i] != '\0') 
    {
        if(num[i] < '0' || num[i] > '9') 
        {
            valid = 0;
            break;
        }
        length++;
        i++;
    }
    if(length > 50) 
    {
        valid = 0;
    }
    if(valid == 1)
    {
        printf("Valid number string");
    }
    else
    {
        printf("Invalid number string");
    }
}