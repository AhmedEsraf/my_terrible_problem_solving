// write a C program to count the total number of notes in a given amount

#include <stdio.h>

int main()
{
    int amount, note1000, note500, note200, note100, note50, note20, note10, note5, note2 ;

    
    note1000 = note500 = note200 = note100 = note50 = note20 = note10 = note5 = note2 =  0;

   
    printf("Enter the total amount: ");
    scanf("%d", &amount);

    
    if (amount >= 1000) {
        note1000 = amount / 1000;
        amount %= 1000;
    }
    if (amount >= 500) {
        note500 = amount / 500;
        amount %= 500;
    }
    if (amount >= 200) {
        note200 = amount / 200;
        amount %= 200;
    }
    if (amount >= 100) {
        note100 = amount / 100;
        amount %= 100;
    }
    if (amount >= 50) {
        note50 = amount / 50;
        amount %= 50;
    }
    if (amount >= 20) {
        note20 = amount / 20;
        amount %= 20;
    }
    if (amount >= 10) {
        note10 = amount / 10;
        amount %= 10;
    }
    if (amount >= 5) {
        note5 = amount / 5;
        amount %= 5;
    }
    if (amount >= 2) {
        note2 = amount / 2;
        amount %= 2;
    }
   

    
    printf("Total number of notes:\n");
    if (note1000) printf("1000: %d\n", note1000);
    if (note500) printf("500: %d\n", note500);
    if (note200) printf("200: %d\n", note200);
    if (note100) printf("100: %d\n", note100);
    if (note50) printf("50: %d\n", note50);
    if (note20) printf("20: %d\n", note20);
    if (note10) printf("10: %d\n", note10);
    if (note5) printf("5: %d\n", note5);
    if (note2) printf("2: %d\n", note2);
    

    
}
