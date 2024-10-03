/*This is a program to check loan ellegibility
Author:ISAAC*/
#include <stdio.h>
int main() {
    int age;
    float income;
    printf("Enter your age:");
    scanf("%d", & age);
    printf("Enter your annual income:");
    scanf("%lf",& income);
    if(age>=21 && income>=21000);
    {
        printf("congratulations,you qualify for a loan.\n");
        printf("Unfortunately,we are unable to offer you a loan at this .\n");
    }
    return 0;
    }
