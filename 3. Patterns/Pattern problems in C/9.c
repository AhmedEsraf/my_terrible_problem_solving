// wider half arrow

#include <stdio.h>

int main()
{
    int num = 5;

    printf("Enter the number of rows: ");
    scanf("%d", &num);
    int space_before = 0;
    int space_after = num - 1;
    for (int i = 0; i < 2 * num - 1; i++)
    {
        for (int j = 0; j < 2 * num - 1; j++)
        {
            if (j < space_before || j >= 2 * num - 1 - space_after)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
        if (i < num && space_before < ((2 * num) - 2))
        {
            space_before += 2;
            space_after--;
        }
        else
        {
            space_before -= 2;
            space_after++;
        }
    }
}