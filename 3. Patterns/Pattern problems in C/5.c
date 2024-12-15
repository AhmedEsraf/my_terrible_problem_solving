// Hollow Right Triangle 

#include<stdio.h>

int main() {
    int n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (int row = 1; row <=n ;row++) {
        for (int col =1; col <= n;col++) {
            if (row == n || (row >=1 && row <=n && col == n) || (row!=1 && row!= n) && (col ==n-row+1)){
                printf("*");
            }
            else {printf(" ");}
        }
    printf("\n");
    }

}