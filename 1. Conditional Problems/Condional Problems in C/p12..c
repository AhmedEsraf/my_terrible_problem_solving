// write a C program to input marks of five subjects (Physics, Chemistry, Biology, Mathematics, and Computer). Calculate percentage and Grade.

#include<stdio.h>

int main() {
    float s1,s2,s3,s4,s5;
    printf("Enter marks of Physics, Chemistry, Biology, Math , Computer: ");
    scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);

    if (s1 < 0 || s1 > 100 || s2 < 0 || s2 > 100 || s3 < 0 || s3 > 100 || s4 < 0 || s4 > 100 || s5 < 0 || s5 > 100) {
    printf("Invalid input! Marks should be between 0 and 100.\n");
    return 1;
}


    float avg = (s1+s2+s3+s4+s5) / 5;

    printf("Your Average Score = %.f\n",avg);

    if (avg >= 90) {
    printf("Your Grade is A\n");
} else if (avg >= 80) {
    printf("Your Grade is B\n");
} else if (avg >= 70) {
    printf("Your Grade is C\n");
} else if (avg >= 60) {
    printf("Your Grade is D\n");
} else if (avg >= 40) {
    printf("Your Grade is E\n");
} else {
    printf("Your Grade is F\n");
}

    }

