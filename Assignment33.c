#include <stdio.h>

int main() {
    int n, i;
    unsigned long long factorial = 1; // Use unsigned long long for larger numbers
                                     // Initialize to 1

    // Prompt the user for a number
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    // Factorial is not defined for negative numbers
    if (n < 0) {
        printf("Error: Factorial does not exist for negative numbers.\n");
    } else {
        // Calculate the factorial using a for loop
        // The loop runs from 1 up to n
        for (i = 1; i <= n; ++i) {
            factorial *= i; // Same as: factorial = factorial * i;
        }

        // Print the result
        // Use %llu for unsigned long long
        printf("Factorial of %d = %llu\n", n, factorial);
    }

    return 0;
}
