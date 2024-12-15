// write a program that solves a quadratic equation of the form ax² + bx + c = 0
// where the user provides values for a, b, and c.
// If it's impossible to
// calculate the roots because of a division by zero or a square root of a negative number,
// print "No real root"; otherwise, print the answers.

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, dis, x1, x2;
    printf("Enter Value for a , b ,c: ");
    scanf("%f%f%f", &a, &b, &c);
    if (a == 0)
    {
        printf("Invalid");
    }
    else
    {
        dis = b * b - 4 * a * c;

        if (dis < 0)
        {
            printf("Invalid");
        }
        else if (dis == 0)
        {
            x1 = -b / (2 * a);
            printf("x = %f", x1);
        }
        else if (dis > 0) {
            x1 = (-b + sqrt(dis))/(2*a);
            x2 = (-b -sqrt(dis))/(2*a);
            printf("x1,x2 = %.2f , %.2f",x1,x2);
        }
        else {
            printf("No Real Root\n");
        }
    }
}