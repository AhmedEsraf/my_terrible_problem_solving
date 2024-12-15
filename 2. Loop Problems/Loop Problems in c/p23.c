// Write a C program to convert a binary number into decimal.

#include<stdio.h>
#include<math.h>


int main() {
    int n,decimal = 0,remainder,power=0;
    printf("Enter Valid Binary Number: ");
    scanf("%d",&n);

    while ( n!= 0) {
        remainder = n % 10;
        decimal += remainder*pow(2,power);
        n /= 10;
        power++;
    }

    printf("Decimal value: %d",decimal);

}


