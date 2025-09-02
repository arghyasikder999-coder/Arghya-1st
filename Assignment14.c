#include <stdio.h>
#include <math.h>

int main() {
    double num;

    printf("Enter a number: ");
    scanf("%lf", &num);

    printf("Floor value = %.0lf\n", floor(num));
    printf("Ceil value = %.0lf\n", ceil(num));
    return 0;
}
