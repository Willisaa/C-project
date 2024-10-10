/*program for while_loop
Author:Isaac Kiplangat
Date:7/10/24*/
#include <stdio.h>

int main() {
    int start, end;

    printf("Enter the starting value: ");
    scanf("%d", &start);
    printf("Enter the ending value: ");
    scanf("%d", &end);

    printf("\nDo-While Loop:\n");
    int i = start;
    do {
        printf("%d ", i);
        i++;  
    } while (i <= end);

    printf("\n");
    return 0;
}