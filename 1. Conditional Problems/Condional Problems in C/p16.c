//  write a program that takes three integers as input,
//   representing the sides of a triangle, and determines if it's a right triangle. 
//  If so, determine whether the triangle is equilateral, isosceles, or scalene

#include <stdio.h>

int main() {
    int a,b,c;

    printf("Enter the value for a,b,c: ");
    scanf("%d%d%d",&a,&b,&c);

    
    if (a+b <= c||a+c <= b||b+c<= a) {
        printf("The sides do not form a triangle.");
        return 0;
    }

    
    if (a*a+ b*b== c*c || a*a+c*c == b *b || b*b + c*c == a*a) {
        printf("It is a right triangle.");
    } else {
        printf("It is not a right triangle.");
    }

   
    if (a==b && b==c) {
        printf("The triangle is equilateral.");
    } else if (a==b || b==c || a==c) {
        printf("The triangle is isosceles.");
    } else {
        printf("The triangle is scalene.");
    }

    
}




