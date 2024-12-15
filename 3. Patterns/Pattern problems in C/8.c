// Hollow square inside a square


#include<stdio.h>

int main() {
    int a, b, n;
    printf("Enter n: ");
    scanf("%d", &n);

    a = n / 2;
    b = a + 1;

    for (int i = 1; i <= n-1; i++) {
        for (int j = 1; j <= n; j++) {
            if (j > a && j < b) {
                printf(" ");
            } else {
                printf("*");
            }
        }
       
        if (i < n / 2) {
            a--;
            b++;
        } else {
            a++;
            b--;
        }

        printf("\n");
    }

    return 0;
}
