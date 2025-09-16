#include <stdio.h>
#include <ctype.h> // To use isalpha() and tolower()

int main() {
    char ch;

    printf("Enter an alphabet: ");
    scanf("%c", &ch);

    // Check if the input is an alphabet
    if (!isalpha(ch)) {
        printf("Error: Input is not an alphabet.\n");
    } else {
        // Use switch-case to check for vowel or consonant [cite: 9]
        // Convert character to lowercase to simplify the switch
        switch (tolower(ch)) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                printf("'%c' is a Vowel.\n", ch); [cite: 11]
                break;
            default:
                printf("'%c' is a Consonant.\n", ch); [cite: 11]
        }
    }

    return 0;
}
