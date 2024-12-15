// write a C program to input any alphabet and check whether it is vowel or consonant.
#include<stdio.h>
#include<ctype.h>

int main()
{
    char ch;
    printf("Enter your character: ");
    scanf("%c", &ch);
    ch = towlower(ch);


    if (isalpha(ch)) {

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("%c is a Vowel",ch); }
        else {
            printf("%c is a Consonant",ch);
        }
    }
    else {
        printf("%c is not an Alphabet",ch);
    }
}