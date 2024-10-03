/*This is a program to calculate fine amount for library books
Author: ISAAC*/
#include <stdio.h>

int main() {
    int ID, due, return_date, days_overdue, fine;
    printf("Enter Book ID: ");
    scanf("%d", &ID);
    printf("Enter Due Date (in days): ");
    scanf("%d", &due);
    printf("Enter Return Date (in days): ");
    scanf("%d", &return_date);

    days_overdue = return_date - due;

    if (days_overdue <= 7) {
        fine = 20;
    } else if (days_overdue <= 14) {
        fine = 50;
    } else {
        fine = 100;
    }
    int fine_amount;
    fine_amount=days_overdue*fine;
    printf("Book ID: %d\n", ID);
    printf("Due Date: %d\n", due);
    printf("Return Date: %d\n", return_date);
    printf("Days Overdue: %d\n", days_overdue);
    printf("Fine Rate: Ksh %d per day\n", fine);
    printf("Total Fine Amount: Ksh %d\n",fine_amount);

    return 0;
}