/*program for while loop
Author:Isaac Kiplangat
Date:7/10/2024*/
#include <stdio.h>

int main() {
    int start, end;

    printf("Enter the starting value: ");
    scanf("%d", &start);
    printf("Enter the ending value: ");
    scanf("%d", &end);

    printf("\nWhile Loop:\n");
    int i = start;
    while (i <= end) {
        printf("%d ", i);
        i++;  
    }

    printf("\n");
    return 0;
}