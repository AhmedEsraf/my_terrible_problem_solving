// Write a C program to find sum of all even numbers between 1 to n using loop

#include <stdio.h>

int main()
{
    int i = 1,sum=0,n;
    printf("Enter n: ");
    scanf("%d", &n);


    while (i <=n) {
        if (i%2==0) {
            sum = sum + i;  
        }
        i++;
    }

    printf("Sum= %d",sum);

}