#include <stdio.h>

int main() {
    int marks;

    printf("Enter student's marks (0-100): ");
    scanf("%d", &marks); [cite: 33]

    // Handle invalid input first
    if (marks < 0 || marks > 100) {
        printf("Error: Marks must be between 0 and 100.\n");
        return 1; // Exit program with an error
    }

    // Use integer division to group marks by 10s
    switch (marks / 10) {
        case 10: // 100 marks
            printf("Grade A+\n"); [cite: 34, 35]
            break;
            
        case 9:  // 90-99 marks
            // We need an inner check to split this group
            if (marks >= 95) {
                printf("Grade A+\n"); [cite: 34, 35]
            } else {
                printf("Grade A\n"); [cite: 36, 38] // 90-94
            }
            break;
            
        case 8:  // 80-89 marks
            printf("Grade B\n"); [cite: 39, 41]
            break;
            
        case 7:  // 70-79 marks
            printf("Grade C\n"); [cite: 42, 44]
            break;
            
        default: // This will catch cases 0-6 (marks 0-69)
            printf("Grade F\n"); [cite: 45] // 70 below
            break;
    }

    return 0;
}
