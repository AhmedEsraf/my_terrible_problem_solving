//  write a C program to input electricity unit charges 
// and calculate the total electricity bill according to the given condition:
// For the first 50 units: Rs. 0.50/unit
// For the next 100 units: Rs. 0.75/unit
// For the next 100 units: Rs. 1.20/unit
// For units above 250: Rs. 1.50/unit
// An additional surcharge of 20% is added to the bill.

#include<stdio.h>

int main() {
    float u , empty,bill;
    printf("Enter Your Electricity Unit: ");
    scanf("%f",&u);

    if (u <= 50) {
        bill = u*0.5;
    }
    else if (u>50 && u <=150) {
        bill= 50*0.5 + (u-50)*0.75;
    }
    else if (u>150 && u <=250) {
        bill= 50*0.5 + 100*0.75; + (u-150)*1.2;
    }
    else if (u>250) {
        bill= 25 + 75 + 120 + (u-250)*1.5; }
    else {
        printf("Invalid Unit");
    }

    bill = bill + bill*0.2;
    printf("Your Total Bill: Rs. %.2f",bill);
}