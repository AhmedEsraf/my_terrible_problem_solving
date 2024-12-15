// Write a C program to find LCM of two numbers


#include<stdio.h>

int main() {
    int num1, num2, gcd, remainder,lcm;

    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    
    int a = num1;
    int b = num2;
    if (a < b) {
        int temp = a;
        a = b;
        b = temp;
    }

    
    while (b != 0) {
        remainder = a % b;
        a = b;
        b = remainder;
    }

    gcd = a; 
    lcm = (num1 * num2) / gcd ;

    printf("LCM of %d and %d is %d\n", num1, num2, lcm);

}


