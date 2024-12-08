#include <stdio.h>

int main() {
    int num1, num2;
    
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Check if the two numbers are equal
    if (num1 == num2) {
        printf("The numbers %d and %d are equal.\n", num1, num2);
    } else {
        printf("The numbers %d and %d are not equal.\n", num1, num2);
    }

    return 0;
}
