#include<stdio.h>
int main()
{
    int a = 4, b = 8, AND, OR, XOR, NOT;
    AND = (a & b);
    OR = (a | b);
    XOR = (a ^ b);
    NOT = (~a);
    printf("AND operator value = %d\n", AND);
    printf("OR operator value = %d\n", OR);
    printf("XOR operator value = %d\n", XOR);
    printf("NOT operator value = %d\n", NOT);
    printf("Right Shift operator value = %d\n", a >> 1);
    printf("Left Shift operator value = %d\n", a << 1);
    return 0;
}
