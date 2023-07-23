#include<stdio.h>

int main() {
    int counter;
    char str[20],char1, char2;
    printf("\nEnter A String: ");
    scanf("%s", str);
    printf("\nEnter Character in String To Be Replaced: ");
    scanf(" %c", &char1);
    printf("\nEnter The Character For Replacement: ");
    scanf(" %c", &char2);
    while (str[counter] != '\0')
    {
        if (str[counter] == char1 )
        {
            str[counter] = char2;
        }
        counter++;
    }
    printf("The new string is = %s",str);
}