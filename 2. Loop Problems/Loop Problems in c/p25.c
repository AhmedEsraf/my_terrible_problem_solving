// Write a C program to print Pascal triangle up to n rows

#include<stdio.h>

int main() {
    int n;
    printf("Enter N: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int num = 1;

        for (int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }

        for (int j = 0; j <= i; j++) {
            printf("%d ", num);
            num = num * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}
