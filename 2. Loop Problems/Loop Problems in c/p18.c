// Write a C program to print all Prime numbers between 1 to n

#include<stdio.h>
#include<math.h>

int main () {
    int n;
    printf("Enter Your Number: ");
    scanf("%d",&n);

    for(int j=1;j<=n;j++) {

    if (j <= 1) {}

    else if (j == 2 || j == 3  ) {printf("%d ",j);}

    else if (j % 2 == 0 || j % 3 == 0) {}

    else {
    for (int i = 5;i <= sqrt(n);i+=6) {
         if (j % i == 0 || j % (i + 2) == 0) {   
                break; 
    }
    
    printf("%d ",j);}

    
}


}}