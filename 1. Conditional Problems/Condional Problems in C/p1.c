// write a C program to check whether a number is even or odd.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("%d is Even.\n",n);
    }
    else
    {
        printf("%dis Odd.\n",n);
    }

    return 0;
}