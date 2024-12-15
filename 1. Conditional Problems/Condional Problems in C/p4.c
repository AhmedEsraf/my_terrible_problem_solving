// write a C program to find maximum between three numbers

#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter a , b , c: ");
    scanf("%d%d%d",&a,&b,&c);

    if (a >= b && a >= c) {
        printf("%d is the highest",a);
    }
    else if (b>=c) {
        printf("%d is the highest",b);
    }
    else {
        printf("%d is the highest",c);
   
    }
    return 0;

}