// Write a C program to find all prime factors of a number.



#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    
    while (n % 2 == 0) {
        printf("2 ");
        n /= 2;
    }
    for (int i =  3 ; i <= sqrt(n);i+=2) {
        while (n % i == 0) {
            printf("%d ",i);
            n /= i;
        }
    
    }
if ( n > 2) {
        printf("%d ",n);
    }
}
    
