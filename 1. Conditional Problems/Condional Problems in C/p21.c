// Read four integer values A, B, C, and D. Then, 
// if B is greater than C and D is greater than A and 
// if the sum of C and D is greater than the sum of A and B, and 
// if C and D are positive values and A is even, print YES; otherwise, print NO

#include <stdio.h>

#include <stdio.h>

int main() {
    int a, b, c, d;
    printf("Enter values for a, b, c, and d: ");
    scanf("%d%d%d%d",&a,&b,&c,&d);

    
    if (b > c && d > a && (c + d) > (a + b) && c > 0 && d > 0 && a % 2 == 0) {
        printf("YES");
    } else {
        printf("NO");
    }

    
}

