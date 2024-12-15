// Write a C program to print all ASCII character with their values.

#include<stdio.h>

int main() {
    int n = 0;

    while (n <= 127) {
        printf("%c = %d \n",n,n);
        n++;

    }

}