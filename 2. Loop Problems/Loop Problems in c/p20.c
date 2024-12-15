// Write a C program to print all Armstrong numbers between 1 to n.


#include <stdio.h>
#include <math.h>

int main() {
    int n, digits, remainder, og, summ;

    
    printf("Enter a number: ");
    scanf("%d", &n);

    
    printf("Armstrong numbers between 1 and %d are:\n", n);

  
    for (int i = 1; i <= n; i++) {
        og = i;  
        summ = 0;
        digits = 0;

        int temp = i; 

        
        while (temp != 0) {
            temp = temp / 10;
            digits++;
        }

        temp = i; 

       
        while (temp != 0) {
            remainder = temp % 10;
            summ += pow(remainder, digits);  
            temp /= 10;
        }

       
        if (summ == og) {
            printf("%d ", og); 
        }
    }

    return 0;
}

