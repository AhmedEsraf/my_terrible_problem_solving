// write a program that takes an integer number as input, 
// which is greater than 99 and less than 1000. 
// Print the first digit of the number. As an example, if the input number is 253, print 2.

#include<stdio.h>

int main() {
    int n;
    printf("Take a Number between 99 and 1000: ");
    scanf("%d",&n);

    if (n<99 || n >1000) {
        printf("Invalid Input");
    }
    while (n>9){
        n /= 10;
        
    }
    printf("First Digit is: %d",n);
}