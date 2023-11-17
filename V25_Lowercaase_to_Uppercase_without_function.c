//  CODE FOR: Convert lowercase letter to uppercase letter without library function.

/*
    Important ASCII value:
    '0' --> 48;
    'A' --> 65;
    'a' --> 97;
*/

#include <stdio.h>

int main()
{
    char lowLetter;

    // Input
    printf("Enter any lowercase letter: ");
    scanf("%c", &lowLetter);

    // Output
    printf("Equivalent uppercase letter: %c", lowLetter - 32); // 'a' to 'A' = 97 - 32 = 65

    return 0;
}