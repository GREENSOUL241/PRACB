#include <stdio.h>

// Recursive function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;  // Base case: factorial of 0 or 1 is 1
    } else {
        return n * factorial(n - 1);  // Recursive case: n * factorial(n-1)
    }
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
