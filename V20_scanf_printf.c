// CODE FOR: scanf and printf function.

/*
    Structure:
    Input  -->   scanf("format specifier for data types", &variable_name);      [& represent the address of the variable]
    Output -->  printf("Things you want to print");                             [To print string or instruction]
                printf("Format specifier for data types", variable_name);       [To print inputed or calculated data]
*/

#include <stdio.h>

int main()
{
    // Declaration of variable
    int num1, num2, num3;
    float fnum1, fnum2;
    char x, y;

    // Beginer input output
    printf("Enter an intrger: ");
    scanf("%d", &num1);
    printf("Inputed integer: %d\n", num1);

    // Noob input output
    printf("\nEnter an integer: ");
    scanf("%d", &num2); // Integer input
    printf("Enter a float: ");
    scanf("%f", &fnum1); // Float input
    printf("Enter a character: ");
    scanf(" %c", &x);                        // Character input
    printf("\nInputed integer: %d\n", num2); // Printing integer
    printf("Inputed float: %f\n", fnum1);    // Printing float
    printf("Inputed character: %c\n", x);    // Printing character

    // Multilae input output at once
    printf("\nEnter an integer, a float and a character: ");
    scanf("%d %f %c", &num3, &fnum2, &y);                                           // Input of integer, float and character
    printf("Inputed integer, float and character are: %d, %f, %c", num3, fnum2, y); // Printing integer, float and character

    return 0;
}