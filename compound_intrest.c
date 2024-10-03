/*This is a program to calculate compound intrest
Author:ISAAC*/
#include <stdio.h>
#include <math.h>
int main() {
    float principal, rate, time, compound_interest;
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter annual interest rate (in percent): ");
    scanf("%f", &rate);
    printf("Enter time period (in years): ");
    scanf("%f", &time);
    compound_interest = principal * pow((1 + rate / 100), time);
    printf("Total amount = %.2f\n", compound_interest);

    return 0;
}