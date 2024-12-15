// write a C program to check whether a character is uppercase or lowercase alphabet.
#include<stdio.h>


int main()
{
    char ch;
    printf("Enter your character: ");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z') {
        printf("%c is a lowercase letter",ch); }
    else if (ch >= 'A' && ch <= 'Z') {
         printf("%c is a uppercase letter",ch);
    }
    else {
        printf("%c is not an Alphabet",ch);
    }
    }