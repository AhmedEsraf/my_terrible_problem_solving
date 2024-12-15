// Number Box Pattern


#include <stdio.h>

int main() {
    int n;
    printf("Enter N: ");
    scanf("%d", &n);

    int size = 2 * n - 1; 

    for (int row = 1; row <= size; row++) {
        for (int col = 1; col <= size; col++) {

            // imagine  4 quadrents in 4 directions where the center starts from 1 in this specific pattern
            // Here we determine the minimum distance in each quadrent and
            // figure the printing number for that specific cell number 

            int minimum_dist;
            if (row < col) {
                minimum_dist = row;
            } else {
                minimum_dist = col;
            }
            if (minimum_dist > size - row + 1) {
                minimum_dist = size - row + 1;
            }
            if (minimum_dist > size - col + 1) {
                minimum_dist = size - col + 1;
            }
            printf("%d ", n - minimum_dist + 1);
        }
        printf("\n");
    }

    return 0;
}