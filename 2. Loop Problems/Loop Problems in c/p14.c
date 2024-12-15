// Write a C program to calculate factorial of a number

#include <stdio.h>

int main() {
    int number;
    long long factorial = 1; 

   
    printf("Enter a number: ");
    scanf("%d", &number);

    
    if (number < 0) {
        printf("Invalid Input as negative numbers don't have Factorial.\n");
    } 
    
    else {
        
        for (int i = 1; i <= number; i++) {
            factorial *= i;
        }
        printf("Factorial of %d = %lld\n", number, factorial);
    }

    
}

