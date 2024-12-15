#include<stdio.h>

int main() {
    int n;
    printf("Enter n (greater than 4): ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            // Top and bottom rows are completely filled
            if (i == 1 || i == n) {
                printf("*");
            } 
            // Middle two rows with 1 star on each side
            else if ((i == n / 2 + 1 || i == n / 2 + 2) && (j == 1 || j == n)) {
                printf("*");
            } 
            // Hollow area for other rows
            else if (j == 1 || j == n) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
