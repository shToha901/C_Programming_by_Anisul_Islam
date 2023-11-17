//  CODE FOR: Conversion between Decimal to Octal and Octal to Decimal.

/*
    To do conversion between Decimal and Octal just simply change the
    formate specifier. [ONLY WORKS FOR INTEGER_DATA_TYPES]
    Format Specifier:   Decimal --> %d
                        Octal ----> %o
*/

#include <stdio.h>

int main()
{
    int decimal, octal;

    printf("Enter a decimal number: "); // Input
    scanf("%d", &decimal);
    printf("Equivalent octal number: %o\n", decimal); // Output

    printf("\nEnter an octal number: "); // Input
    scanf("%o", &octal);
    printf("Equivalent decimal number: %d\n", octal); // Output

    return 0;
}