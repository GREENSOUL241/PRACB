#include <stdio.h>
#include <string.h>

int main() {
    char ch;
    char str[100];
    int num;
    float fnum;

    // Demonstrate getchar() and putchar()
    printf("Enter a character: ");
    ch = getchar(); // Reads a single character from the input
    printf("You entered: ");
    putchar(ch); // Prints the single character to output
    printf("\n");
    //Note: Instead of character you can put gender

    // Demonstrate scanf() and printf()
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("You entered the integer: %d\n", num);

    printf("Enter a floating-point number: ");
    scanf("%f", &fnum);
    printf("You entered the floating-point number: %.2f\n", fnum);
    //Note: Instead of integer you can put Age, and for floating-point number you can put weight


    // Demonstrate gets() and puts()
    printf("Enter a string: ");
    gets(str); // Reads a line of text (use fgets in real applications for safety)
    printf("You entered: ");
    puts(str); // Outputs the string followed by a newline
    // Note: Instead of string you can put Name

    // Demonstrate sizeof operator
    printf("Size of char: %d bytes\n", sizeof(ch));
    printf("Size of int: %d bytes\n", sizeof(num));
    printf("Size of float: %d bytes\n", sizeof(fnum));
    printf("Size of your string: %d bytes\n", sizeof(str));

    return 0;
}
