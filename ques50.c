/*
Q50 (Nested Loops without Arrays/Strings)
Write a program to print the following pattern:
*****
****
***
**
*       */

#include <stdio.h>
int main() {
    int i, j, rows;

    // Take number of rows as input
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        for (j = rows; j >= i; j--) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
