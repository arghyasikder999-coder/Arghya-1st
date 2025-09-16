#include <stdio.h>

int main() {
    int n, i;
    int sum = 0; // Initialize sum to 0 to avoid garbage values

    // Prompt the user to enter the value of 'n'
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    // Ensure the user enters a positive number
    if (n <= 0) {
        printf("Please enter a positive number.\n");
        return 1; // Exit if the input is not a natural number
    }

    // Loop from 1 up to the number 'n' entered by the user
    for (i = 1; i <= n; ++i) {
        sum += i; // Add the current number 'i' to the sum
    }

    // Print the final calculated sum
    printf("The sum of the first %d natural numbers is: %d\n", n, sum);

    return 0;
}
