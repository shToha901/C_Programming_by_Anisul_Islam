//  CODE FOR: Convert uppercase letter to lowercase letter with library function.

/*
    toLower is a library function that helps us to convert any uppercase letter to
    lowercase letter without any help of ASCII value. You can use tolower directly
    in printf function but the best practice is to store the value of tolower in a
    char_type variable and then print it.

    Structure:  tolower(char_type variable);
*/

#include <stdio.h>

int main()
{
    char upper1, upper2, lower2;

    // Input
    printf("Enter a uppercase letter: ");
    scanf("%c", &upper1);
    printf("Enter another uppercase letter: ");
    scanf(" %c", &upper2); // A space before format specifier helps us not to take enter button as input

    // Output
    printf("\nEquivalent lowercase of first letter: %c\n", tolower(upper1)); // Output without using another variable

    lower2 = tolower(upper2);
    printf("Equivalent lowercasse of second letter: %c\n", lower2); // Output using another variable (best practice)

    return 0;
}