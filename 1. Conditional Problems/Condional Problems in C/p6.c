// write a C program to check whether a character is an alphabet or not

#include <stdio.h>

int main()
{
    char ch;
    printf("Enter your character: ");
    scanf("%c", &ch);

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("%c is an Alphabet",ch);
    }
    else {
        printf("%c is an not Alphabet",ch);
    }
    return 0;
}