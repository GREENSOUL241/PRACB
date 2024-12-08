// Logical Operators Demonstration
#include <stdio.h>

int main()
{
    int a = 10, b = 5, AND, OR, NOT, AND_OR;

    // Logical AND operation
    AND = (a > 10) && (b > a);
    printf("Logical AND output = %d\n", AND);

    // Logical OR operation
    OR = (a == 10) || (b > a);
    printf("Logical OR output = %d\n", OR);

    // Combined Logical Expression
    AND_OR = ((a >= 10) || (b > a)) && (b == 5);
    printf("Logical Expression output = %d\n", AND_OR);

    // Logical NOT operation
    NOT = !((a >= 10) || (b > a) && (b == 5));
    printf("Logical NOT output = %d\n", NOT);

    return 0;
}