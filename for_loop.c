/*program of for_loop
Author:Isaac Kiplangat
Date:7/10/24*/
#include <stdio.h>

int main() {
    int start, end;


    printf("Enter the starting value: ");
    scanf("%d", &start);
    printf("Enter the ending value: ");
    scanf("%d", &end);

    printf("\nFor Loop:\n");
    for (int i = start; i <= end; i++) {
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}