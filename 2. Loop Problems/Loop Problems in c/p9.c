// Write a C program to check whether a number is palindrome or not

#include <stdio.h>

int main() {
    int n, temp, og, r_sum = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    
    og = n; 

    while (n != 0)
    {
        temp = n % 10;  
        n = n / 10;     
        r_sum = r_sum * 10 + temp;  
    }

    
    if (og == r_sum)
    {
        printf("%d is a palindrome.\n", og);
    }
    else
    {
        printf("%d is not a palindrome.\n", og);
    }

    
}
