// write a C program to input the basic salary of an employee and calculate 
// its Gross salary according to the following:
// Basic Salary <= 10000: HRA = 20%, DA = 80% Basic Salary <= 20000: HRA = 25%, DA = 90%Basic Salary > 20000: HRA = 30%, DA = 95

#include<stdio.h>

int main() {
    float s,gs;
    printf("Enter Your Salary: ");
    scanf("%f",&s);

    if (s <= 10000) {
        gs = s * 0.8 + s * 0.2 + s;
    }
    else if (s > 10000 && s <= 20000) {
        gs = s + s *0.25 + s *0.9;
    }
    else if ( s > 20000 ) {
        gs = s*0.3 + s*0.95 + s;
    }
    else {
        printf("Inavlid Input");
    }
    
    printf(" Gross Sallary: %.2f",gs);



}
