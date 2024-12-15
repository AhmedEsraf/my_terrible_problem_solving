// Heart shape

#include <stdio.h>

int main()
{
    int n;
    printf("Enter odd value for n: ");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("Please enter an odd value for n.\n");
        return 1;
    }

    int a = n;
    int b = n;
    int c = 3 * n - 2;
    int d = 3 * n - 2;

    for (int row = 1; row <= n + (4 * n - 3) / 2; row++)
    {
        for (int col = 1; col <= 4 * n - 3; col++)
        {

            // upper half
            if ((col >= a && col <= b) || (col >= c && col <= d))
            {
                printf("*");
            }
            // lower half
            else if (row >= n && (col >= a && col <= d))
            {
                printf("*");
            }

            else
            {
                printf(" ");
            }
        }
        // adjusting the pointers
        if (row < n)
        {
            a--;
            b++;
            c--;
            d++;
        }
        else
        {
            a++;
            d--;
        }
        printf("\n");
    }
    return 0;
}
