#include <stdio.h>

// Function to swap two numbers using call by value
void swap(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;

    // Print swapped values inside the function (local to function scope)
    printf("Inside swap function: a = %d, b = %d\n", a, b);
}

int main() {
    int num1, num2;

    // Prompt user to enter two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Print values before swap
    printf("Before swap: num1 = %d, num2 = %d\n", num1, num2);

    // Call the swap function
    swap(num1, num2);

    // Print values after swap (in main, they won't change)
    printf("After swap in main: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
