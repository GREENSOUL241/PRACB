#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char str[100];
    printf("Enter Any string: ");
    gets(str);
    int start = 0;
    int end = strlen(str) - 1;
    while (end > start)
    {
        if (str[start] != str[end])
        {
            printf("\nNot Palindrome:");
            exit(0);
        }
        end--;
        start++;
    }
    printf("\n%s is Palindrome String:", str);
}
