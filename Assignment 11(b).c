#include <stdio.h>
int main() {
    int num, lastDigit;
    printf("Enter an integer: ");
    scanf("%d", &num);

    // With modulus
    lastDigit = num % 10;

    printf("Last digit (with modulus) = %d\n", lastDigit);
    return 0;
}
