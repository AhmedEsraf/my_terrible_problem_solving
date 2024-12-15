// write a program to check whether the number is a perfect square number or not

#include <stdio.h>
#include <math.h>

int main()
{
    int n, sqr;
    printf("Enter n: ");
    scanf("%d", &n);

    sqr = (int)sqrt(n);

    if (sqr * sqr == n)
    {
        printf("%d is a Perfect square Number", n);
    }

    else
    {
        printf("%d is a not Perfect square Number", n);
    }
    return 0;
}
