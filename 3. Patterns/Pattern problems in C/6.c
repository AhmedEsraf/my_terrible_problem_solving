// Upside down Equiletaral Triangle


#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);


    for (int row = 1; row <= n; row++) {
        
        for (int col= 1; col <= 2*n -1 ;col++) {
            if (row == 1 || ((row > 1) && (row <= n)) && col == row || ((row > 1) && (row <= n)) && col == (2*n - row) ) {
                printf("*");
                }
            else {
                printf(" ");
            }

           

        }
         printf("\n");

    }}