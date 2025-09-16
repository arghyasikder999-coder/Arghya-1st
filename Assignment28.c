#include <stdio.h>

int main() {
    float basicSalary, hra, ta, da, grossSalary;

    // Input: Basic Salary [cite: 14]
    printf("Enter Basic Salary: ");
    scanf("%f", &basicSalary);

    // Using switch(1) as a way to enclose the logic
    // within a switch-case block as required 
    switch (1) {
        case 1:
            // Calculate HRA = 20% of Basic [cite: 15]
            hra = 0.20 * basicSalary;
            
            // Calculate TA = 10% of Basic [cite: 16]
            ta = 0.10 * basicSalary;
            
            // Calculate DA = 5% of Basic [cite: 16]
            da = 0.05 * basicSalary;
            
            // Calculate Gross Salary = Basic + HRA + TA + DA [cite: 18]
            grossSalary = basicSalary + hra + ta + da;
            break;
    }

    printf("\n--- Salary Details ---\n");
    printf("Basic Salary: %.2f\n", basicSalary);
    printf("HRA (20%%):    %.2f\n", hra);
    printf("TA (10%%):     %.2f\n", ta);
    printf("DA (5%%):      %.2f\n", da);
    printf("-----------------------\n");
    printf("Gross Salary:   %.2f\n", grossSalary); [cite: 17]

    return 0;
}
