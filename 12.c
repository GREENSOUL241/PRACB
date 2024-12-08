#include <stdio.h>

int main() {
    int i;

    // Demonstrate the use of continue statement
    printf("Demonstrating the continue statement:\n");
    for (i = 1; i <= 10; i++) {
        // Skip the iteration when the number is 5
        if (i == 5) {
            continue;  // Skip the current iteration
        }
        printf("%d ", i);  // Print numbers 1 to 10 except 5
    }

    printf("\n\n"); // New lines

    // Demonstrate the use of break statement
    printf("Demonstrating the break statement:\n");
    for (i = 1; i <= 10; i++) {
        if (i == 7) {
            break;  // Exit the loop when the number is 7
        }
        printf("%d ", i);  // Print numbers 1 to 6, and then break out of the loop
    }

    return 0;
}
