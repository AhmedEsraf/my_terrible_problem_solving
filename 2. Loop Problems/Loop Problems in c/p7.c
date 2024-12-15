// Write a C program to calculate sum of digits of a number

#include <stdio.h>

int main()
{
    int n, temp, sum = 0;
    printf("Enter number: ");
    scanf("%d", &n);

    while (n != 0)
    {
        temp = n % 10;
        n = n / 10;
        sum = sum + temp;
    }

    printf("Sum: %d", sum);
}
