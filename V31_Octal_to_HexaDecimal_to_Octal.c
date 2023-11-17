//  CODE FOR: Conversion between Octal to HexaDecimal and HexaDecimal to Octal.

/*
    To do conversion between Octal and HexaDecimal just simply change the
    formate specifier. [ONLY WORKS FOR INTEGER_DATA_TYPES]
    Format Specifier:   Octal ------> %o
                        HexaDeximal --> %x for (a,b,c,d,e,f)
                                        %X for (A,B,C,D,E,F)
*/

#include <stdio.h>

int main()
{
    int octal, hexa;

    printf("Enter a octal number: "); // Input
    scanf("%o", &octal);
    printf("Equivalent hexa-decimal number: %X\n", octal); // Output in capital letter

    printf("\nEnter an hexa-decimal number: "); // Input
    scanf("%x", &hexa);
    printf("Equivalent octal number: %o\n", hexa); // Output

    return 0;
}