// Write a C program to perform 1's compliment on a binary number.

#include<stdio.h>


int main() {
    int n,temp,remainder,summ = 0,position = 1;
    printf("Enter Valid Binary Number: ");
    scanf("%d",&n);

    temp = n;

    while (temp != 0) {
        remainder = temp % 10;
        temp/= 10;


        if (remainder == 0){
            summ += 1*position;
        }
        else if (remainder == 1){
            summ += 0*position;
        }
        position *= 10;
    }

    printf(" 1's Comp= %d",summ);

}
