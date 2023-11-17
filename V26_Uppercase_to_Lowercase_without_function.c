//  CODE FOR: Convert uppercase letter to lowercase letter without library function.

/*
    Important ASCII value:
    '0' --> 48;
    'A' --> 65;
    'a' --> 97;
*/

#include <stdio.h>

int main()
{
    char uppLetter;

    // Input
    printf("Enter any uppercase letter: ");
    scanf("%c", &uppLetter);

    // Output
    printf("Equivalent lowercase letter: %c\n", uppLetter + 32); // 'A' to 'a' = 65 + 32 = 97

    return 0;
}