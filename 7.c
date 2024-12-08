#include <stdio.h>

int main() {
    int choice;

    // Display menu
    printf("Menu:\n");
    printf("1. Display Hello\n");
    printf("2. Display Welcome\n");
    printf("3. Display Goodbye\n");
    printf("4. Exit\n");

    // Prompt user to enter a choice
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    // Multiway decision using if-else
    if (choice == 1) {
        printf("Hello!\n");
    } else if (choice == 2) {
        printf("Welcome!\n");
    } else if (choice == 3) {
        printf("Goodbye!\n");
    } else if (choice == 4) {
        printf("Exiting program.\n");
    } else {
        printf("Invalid choice! Please choose a number between 1 and 4.\n");
    }

    return 0;
}
