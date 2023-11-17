//  CODE FOR: Convert lowercase letter to uppercase letter with library function.

/*
    toUpper is a library function that helps us to convert any lowercase letter to
    uppercase letter without any help of ASCII value. You can use toupper directly
    in printf function but the best practice is to store the value of toupper in a
    char_type variable and then print it.

    Structure:  toupper(char_type variable);
*/

#include <stdio.h>

int main()
{
    char lower1, lower2, upper2;

    // Input
    printf("Enter a lowercase letter: ");
    scanf("%c", &lower1);
    printf("Enter another lowercase letter: ");
    scanf(" %c", &lower2); // A space before format specifier helps us not to take enter button as input

    // Output
    printf("\nEquivalent uppercase of first letter: %c\n", toupper(lower1)); // Output without using another variable

    upper2 = toupper(lower2);
    printf("Equivalent uppercasse of second letter: %c\n", upper2); // Output using another variable (best practice)

    return 0;
}