// Equileteral Triangle

#include <stdio.h>

int main() {
    int n,space;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    space = n - 1;

    for (int i = 1; i <= n; i++) {
        
        for (int j= 1; j <= 2*n -1 ;j++) {
            if (j <= space || j>2*n-1-space) {

                printf(" ");
            }
            else {printf("*");}
        }    
        printf("\n");
        space--;

    }

    return 0;
}
