/*Project
Author:Isaac
Date:16/10/24*/
#include <stdio.h>

// Function prototypes
void getUserDetails(int *customerID, char customerName[], int *unitsConsumed);
float calculateChargesPerUnit(int unitsConsumed);
float calculateTotalBill(int unitsConsumed, float chargePerUnit);
void displayBill(int customerID, char customerName[], int unitsConsumed, float chargePerUnit, float totalAmount);

int main() {
    int customerID, unitsConsumed;
    char customerName[50];
    float chargePerUnit, totalAmount;

    // Step 1: Get customer details and units consumed
    getUserDetails(&customerID, customerName, &unitsConsumed);

    // Step 2: Calculate charges per unit
    chargePerUnit = calculateChargesPerUnit(unitsConsumed);

    // Step 3: Calculate total bill
    totalAmount = calculateTotalBill(unitsConsumed, chargePerUnit);

    // Step 4: Display the final bill
    displayBill(customerID, customerName, unitsConsumed, chargePerUnit, totalAmount);

    return 0;
}

// Function to get customer details and units consumed
void getUserDetails(int *customerID, char customerName[], int *unitsConsumed) {
    printf("Enter Customer ID: ");
    scanf("%d", customerID);
    printf("Enter Customer Name: ");
    scanf("%s", customerName);
    printf("Enter Units Consumed: ");
    scanf("%d", unitsConsumed);
}

// Function to calculate charges per unit based on the units consumed
float calculateChargesPerUnit(int unitsConsumed) {
    if (unitsConsumed <= 199) {
        return 1.20;
    } else if (unitsConsumed < 400) {
        return 1.50;
    } else if (unitsConsumed < 600) {
        return 1.80;
    } else {
        return 2.00;
    }
}

// Function to calculate total bill with surcharge and minimum bill limit
float calculateTotalBill(int unitsConsumed, float chargePerUnit) {
    float totalAmount = unitsConsumed * chargePerUnit;

    // If bill exceeds Kshs 400, apply 15% surcharge
    if (totalAmount > 400) {
        totalAmount += totalAmount * 0.15;
    }

    // Ensure the minimum bill is Kshs 100
    if (totalAmount < 100) {
        totalAmount = 100;
    }

    return totalAmount;
}

// Function to display the final bill
void displayBill(int customerID, char customerName[], int unitsConsumed, float chargePerUnit, float totalAmount) {
    printf("\n----- Electricity Bill -----\n");
    printf("Customer ID: %d\n", customerID);
    printf("Customer Name: %s\n", customerName);
    printf("Units Consumed: %d\n", unitsConsumed);
    printf("Charge per Unit: %.2f Kshs\n", chargePerUnit);
    printf("Total Amount to Pay: %.2f Kshs\n", totalAmount);
}