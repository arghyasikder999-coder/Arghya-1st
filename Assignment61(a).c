#include <stdio.h>

int main() {
    char str[100];
    int i = 0, length = 0;

    printf("Enter a string: ");
    gets(str);

    // Count characters until null character '\0'
    while (str[i] != '\0') {
        length++;
        i++;
    }

    printf("Length of the string = %d\n", length);
    return 0;
}
