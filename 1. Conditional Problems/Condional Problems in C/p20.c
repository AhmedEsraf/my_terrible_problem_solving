// write a program that takes an integer number as input, which is less than 100, 
// to check whether the number is a Harshad number or not.
//  A Harshad number is an integer divisible by the sum of its digits

#include <stdio.h>

int main() {
    int num, sum = 0, temp;

    printf("Enter an integer less than 100: ");
    scanf("%d", &num);

    
    if (num < 1 || num >= 100) {
        printf("Invalid input. Enter a number less than 100.\n");
        return 0;
    }

    temp = num;

    while (temp > 0) {
        sum += temp % 10;  
        temp /= 10;        
    }

    
    if (num % sum == 0) {
        printf("%d is a Harshad number.\n", num);
    } else {
        printf("%d is not a Harshad number.\n", num);
    }

    return 0;
}
