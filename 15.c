#include <stdio.h>

// Function to calculate factorial iteratively
int factorial(int n) {
    int result = 1;
    
    // Loop to calculate factorial
    for (int i = 1; i <= n; i++) {
        result *= i;  // Multiply result by current number i
    }
    
    return result;
}

int main() {
    int num;
    
    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Check for negative input, as factorial is not defined for negative numbers
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Call the factorial function and display the result
        printf("Factorial of %d is %d\n", num, factorial(num));
    }

    return 0;
}
