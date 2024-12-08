#include <stdio.h>

// Function to swap two numbers using call by reference
void swap(int *a, int *b) {
    int temp;
    temp = *a;  // Dereference pointer to get the value of a
    *a = *b;    // Dereference pointer to assign the value of b to a
    *b = temp;  // Dereference pointer to assign the original value of a to b
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

    // Call the swap function, passing the addresses of num1 and num2
    swap(&num1, &num2);

    // Print values after swap
    printf("After swap: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
