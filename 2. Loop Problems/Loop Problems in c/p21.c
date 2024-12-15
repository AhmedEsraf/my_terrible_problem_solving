//  Write a C program to print Fibonacci series up to n terms.


#include<stdio.h>

int main() {
    int n,num1,num2,temp;
    printf("Enter n: ");
    scanf("%d",&n);


    num1= 1;
    num2= 1;

    printf("Fibonacci Sequence: ");

    for (int i=1; i <=n;i++) {

        printf("%d ",num1);
        
        temp = num1 + num2;
        num1 = num2;
        num2 = temp;
    }
}