#include <stdio.h>

int main() {
    int num1, num2, result, choice;

    // Prompt the user to enter two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Display the menu of operations
    printf("Select an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    // Perform the operation based on the user's choice
    switch (choice) {
        case 1:
            result = num1 + num2;
            printf("Result of addition: %d\n", result);
            break;
        case 2:
            result = num1 - num2;
            printf("Result of subtraction: %d\n", result);
            break;
        case 3:
            result = num1 * num2;
            printf("Result of multiplication: %d\n", result);
            break;
        case 4:
            result = num1 / num2;
            printf("Result of division: %d\n", result);
            break;
        default:
            printf("Invalid choice! Please select a number between 1 and 4.\n");
    }

    return 0;
}
