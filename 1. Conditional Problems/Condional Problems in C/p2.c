// write a C program to check whether a number is divisible by 5 and 11 or not

#include <stdio.h>

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    n % 5 == 0 && n % 11 == 0 ? printf("%d is divisisble by 5 and 11",n) : printf("%d is not divisisble by 5 and 11",n);

    return 0;
}
