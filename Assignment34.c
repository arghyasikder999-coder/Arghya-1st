#include <stdio.h>

int main() {
    int n, i;
    int t1 = 0, t2 = 1, nextTerm;
    int sum = 0;

    // Input number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; i++) {
        printf("%d ", t1);   // print current term
        sum += t1;           // add to sum

        nextTerm = t1 + t2;  // generate next term
        t1 = t2;
        t2 = nextTerm;
    }

    printf("\nSum of the series = %d\n", sum);

    return 0;
}
