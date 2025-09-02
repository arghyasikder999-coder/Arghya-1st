#include <stdio.h>
int main() {
    int num, lastDigit;
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Without modulus: use integer division
    lastDigit = num - (num / 10) * 10;

    printf("Last digit (without modulus) = %d\n", lastDigit);
    return 0;
}
