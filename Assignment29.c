#include <stdio.h>

int main() {
    int units;
    double bill = 0.0;
    
    // Rate assumptions
    double rate1 = 5.0; // Assuming "25 / unit"  means Rs. 5
    double rate2 = 7.0; // Assuming "27/ unit"  means Rs. 7
    double rate3 = 10.0; // As per "₹10 lunit" 

    printf("Enter total units consumed: ");
    scanf("%d", &units); [cite: 22]

    // We can use a trick with integer division in the switch-case [cite: 20]
    // to handle the different slabs.
    // This only works because the first two slabs are 100 units each.
    
    // We handle units > 200 in the default case.
    // Cases 0 and 1 handle 0-99 and 100-199 respectively.
    
    switch (units / 100) {
        case 0: // For 0-99 units
            // Bill is just for the first slab [cite: 23]
            bill = units * rate1;
            break;
            
        case 1: // For 100-199 units
            // Bill = (Cost of first 100 units) + (Cost of remaining units) 
            bill = (100 * rate1) + ((units - 100) * rate2);
            break;
            
        default: // For 200 units and above 
            // Bill = (Cost of first 100) + (Cost of next 100) + (Cost of remaining)
            bill = (100 * rate1) + (100 * rate2) + ((units - 200) * rate3);
            break;
    }

    printf("Total Electricity Bill: %.2f\n", bill);

    return 0;
}
