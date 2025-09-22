#include <stdio.h>

int main() {
    int lower, upper, i, j, isPrime;

    // Input limits
    printf("Enter lower limit: ");
    scanf("%d", &lower);

    printf("Enter upper limit: ");
    scanf("%d", &upper);

    printf("Prime numbers between %d and %d are:\n", lower, upper);

    // Loop through each number in the range
    for (i = lower; i <= upper; i++) {
        if (i < 2) continue; // skip numbers less than 2

        isPrime = 1; // assume prime
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0; // not prime
                break;
            }
        }

        if (isPrime)
            printf("%d ", i);
    }

    printf("\n");

    return 0;
}
