// hollow rhombus


// hollow rhombus

#include<stdio.h>

int main() {
    int n;
    printf("Enter N: ");
    scanf("%d", &n);

    for (int row = 1; row <= n; row++) 
    {
        for (int j = 1; j <=2*n-1;j++) {
            if ((row == 1 && j <= n) || (row == n && j >=n) || ((j != 1 && j != n) && (j == row || j == row + n-1)) ) {
                printf("*");
             }
        else {
            printf(" ");
        }
        }
        printf("\n");
        }
        
    }
