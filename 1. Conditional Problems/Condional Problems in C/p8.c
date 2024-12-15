// write a C program to input any character and check whether it is alphabet, digit, or special character.

#include <stdio.h>

int main()
{
    char ch;
    printf("Enter your character: ");
    scanf("%c", &ch);

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("%c is an Alphabet",ch);
    }
    else if (ch >= '0' && ch <= '9') {
        printf("%c is a Digit",ch);
    }
    else {
        printf("%c is a Special symbol",ch);
    }
}