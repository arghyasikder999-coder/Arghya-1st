#include <stdio.h>

int main() {
    int n, i;

    // Ask the user to enter a number
    printf("Enter an integer to print its multiplication table: ");
    scanf("%d", &n);

    printf("\nMultiplication table for %d:\n", n);

    // Use a for loop to iterate from 1 to 10
    for (i = 1; i <= 10; ++i) {
        // Print the current line of the table
        // Example: 5 * 1 = 5
        printf("%d * %d = %d\n", n, i, n * i);
    }

    return 0;
}
