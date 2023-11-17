//  CODE FOR: Conversion between Decimal to HexaDecimal and HexaDecimal to Decimal.

/*
    To do conversion between Decimal and HexaDecimal just simply change the
    formate specifier. [ONLY WORKS FOR INTEGER_DATA_TYPES]
    Format Specifier:   Decimal ------> %d
                        HexaDeximal --> %x for (a,b,c,d,e,f)
                                        %X for (A,B,C,D,E,F)
*/

#include <stdio.h>

int main()
{
    int decimal, hexa;

    printf("Enter a decimal number: "); // Input
    scanf("%d", &decimal);
    printf("Equivalent hexa-decimal number: %X\n", decimal); // Output in capital letter

    printf("\nEnter an hexa-decimal number: "); // Input
    scanf("%x", &hexa);
    printf("Equivalent decimal number: %d\n", hexa); // Output

    return 0;
}