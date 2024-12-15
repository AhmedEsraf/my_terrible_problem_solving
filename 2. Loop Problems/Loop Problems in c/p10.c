// Write a C program to find frequency of each digit in a given integer

#include <stdio.h>

int main()
{
    int n, temp = 0, count;
    printf("Enter number: ");
    scanf("%d", &n);

    

    for (int digit = 0; digit <= 9; digit++)
    {

        temp = n;
        count = 0;

        while (temp != 0)
        {
            if (temp % 10 == digit)
            {
                count++;
            }
            temp = temp / 10;
        }

        if (count > 0)
        {
            printf("%d is here %d times.\n", digit, count);
        }
    }
}