#include <stdio.h>

int main() {
    int n, product = 1;

    // Prompt user to enter a number
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Check if the entered number is positive
    if (n < 1) {
        printf("Please enter a positive integer.\n");
        return 1;  // Exit the program with error code
    }

    // Calculate the product of first n natural numbers using for loop
    for (int i = 1; i <= n; i++) {
        product *= i;
    }

    // Display the result
    printf("The product of the first %d natural numbers is: %d\n", n, product);

    return 0;
}
