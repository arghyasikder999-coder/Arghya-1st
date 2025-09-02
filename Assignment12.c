#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time, amount, ci;

    printf("Enter Principal: ");
    scanf("%lf", &principal);
    printf("Enter Rate of Interest: ");
    scanf("%lf", &rate);
    printf("Enter Time (in years): ");
    scanf("%lf", &time);

    amount = principal * pow((1 + rate / 100), time);
    ci = amount - principal;

    printf("Compound Interest = %.2lf\n", ci);
    return 0;
}
