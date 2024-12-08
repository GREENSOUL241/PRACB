#include <stdio.h>

int main() {
    int num, product = 1, digit;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle case for 0 as the product of digits should be 0
    if (num == 0) {
        printf("The product of the digits is: 0\n");
        return 0;
    }

    // Calculate the product of digits using do-while loop
    do {
        digit = num % 10;           // Get the last digit
        product *= digit;           // Multiply the product by the last digit
        num /= 10;                  // Remove the last digit
    } while (num != 0);             // Continue until the number becomes 0

    // Display the product of digits
    printf("The product of the digits is: %d\n", product);

    return 0;
}
