#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Reverse the digits using while loop
    while (num != 0) {
        remainder = num % 10;            // Get the last digit
        reversed = reversed * 10 + remainder; // Build the reversed number
        num /= 10;                        // Remove the last digit
    }

    // Display the reversed number
    printf("Reversed number: %d\n", reversed);

    return 0;
}
