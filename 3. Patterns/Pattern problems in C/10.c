// number cross

#include <stdio.h>
int main()
{
    int num = 5;
    printf("enter value to print x with nums: ");
    scanf("%d", &num);
    int space_outer = 0;
    int value = 1;
    for (int i = 0; i < 2 * num - 1; i++)
    {
       
        for (int j = 0; j < 2 * num - 1; j++)
        {

            if ((j >= 0 && j < space_outer) || (j > space_outer && j < 2 * num - 2 - space_outer) || j > 2 * num - 2 - space_outer)
            {
                printf(" ");
            }
            else
            {
                printf("%d", value);
            }
        }
        printf("\n");
        if (i < num - 1)
        {
            space_outer++;
            value++;
        }
        else
        {
            space_outer--;
            value--;
        }
    }
}