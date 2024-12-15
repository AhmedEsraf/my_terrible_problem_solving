// .Write a C program to check whether a number is Prime number or not


#include<stdio.h>
#include<math.h>

int main () {
    int n;
    printf("Enter Your Number: ");
    scanf("%d",&n);

    if (n <= 1) {
        printf("%d is not a Prime.",n);
        return 0;
    }

    if (n == 2 || n == 3  ) {
        printf("%d is a Prime.",n);
        return 1;
    }

    if (n % 2 == 0 || n % 3 == 0) {
        printf("%d is not a Prime.",n);
        return 0;
    }

    for (int i = 5;i <= sqrt(n);i+=6) {
         if (n % i == 0 || n% (i + 2) == 0) {
                printf("%d is not a Prime.",n); 
                break; 
    }

    
}
printf("%d is a Prime.",n);

}