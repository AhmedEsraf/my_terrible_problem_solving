// write a C program to check whether a number is negative, positive, or zero

#include <stdio.h>

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    if (n > 0)
    {
        printf("%d is Positive",n);
    }
    else if (n < 0)
    {
        printf("%d is Negative",n);
    }
    else
    {
        printf("%d is Zero",n);
    }
    return 0;
}