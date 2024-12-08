#include <stdio.h>

int main() {
    int num;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is positive
    if (num > 0) {
        printf("The number %d is positive.\n", num);
    } else {
        printf("The number %d is not positive.\n", num);
    }

    return 0;
}