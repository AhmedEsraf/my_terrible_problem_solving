// Write a C program to find power of a number using for loop

#include<stdio.h>
#include<math.h>

int main() {
    int n,power;
    long long result = 1;

    printf("Enter number and power: ");
    scanf("%d%d",&n,&power);

    for (int i = 1; i<= power ; i++) {
        result = result * n;
    }
    printf("result = %lld\n",result);
}

