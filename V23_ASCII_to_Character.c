// CODE FOR:  Convert ASCII value to Character.

/*
    ASCII value is an integer number which represent a specific character.
    Normal ASCII table ==  0 --> 128
    Extended ASCII table == 0 --> 255
*/

#include <stdio.h>

int main()
{
    int value;

    // Input
    printf("Enter an ASCII value: ");
    scanf("%d", &value);

    // Output
    printf("Equivalent ASCII character is: %c\n", value); // To print character, formate specifier is %c

    return 0;
}