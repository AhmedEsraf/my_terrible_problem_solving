// write a program that takes three angles (in degrees) as 
// input and determines whether they can form a valid triangle. 
// If they can, classify the triangle as equilateral, isosceles, or scalene.

#include <stdio.h>

int main() {
    int a,b,c;

    printf("Enter the values of a,b,c: ");
    scanf("%d%d%d",&a,&b,&c);

    
    if (a+b+c == 180) {
        
        if (a==60 && b==60 && c==60) {
            printf("The triangle is equilateral.");

        } else if (a==b || b==c || a==c) {
            printf("The triangle is isosceles.");

        } else {
            printf("The triangle is scalene.");
        }
    } else {
        printf("The angles do not form a valid triangle.");
    }

    
}
