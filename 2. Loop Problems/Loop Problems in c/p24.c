// Write a C program to convert a decimal number into binary.

#include<stdio.h>
#include<math.h>


int main() {
    int n,remainder,position=1,summ=0;
    printf("Enter Valid Decimal Number: ");
    scanf("%d",&n);


    while (n!= 0) {
        remainder = n % 2;
        summ += remainder*position;
        n /= 2;
        position*=10;
    }
    printf("Binary: %d",summ);
    

}