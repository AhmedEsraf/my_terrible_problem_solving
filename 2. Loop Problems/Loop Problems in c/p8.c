// Write a C program to enter a number and print its reverse

#include <stdio.h>

int main()
{
    int n, temp, sum = 0;
    printf("Enter number: ");
    scanf("%d", &n);

    while (n!=0){
        temp = n%10;
        n = n /10;
        sum = sum*10 + temp;

    }
    printf("Reversed: %d",sum);
}

   