// CODE FOR: Comments and Escape Sequence in C Language

// This is single line comment.

/*
    This is multi line comment.
    you can not do comment into another comment.
    There will be error if you do it.
*/

#include <stdio.h>

int main()
{
    /*
    LIst of Important Escape Sequence:
    \a --> Alert(Bell)
    \b --> Backspace
    \f --> FormFeed
    \n --> NewLine
    \r --> Carrige Return
    \t --> Horizontal Tab(Horizontally 4 space)
    \v --> Vertical Tab(Vertacally 4 space)
    \0 --> Null Character
    \' --> Single Quote
    \" --> Double Quote
    \\ --> Backslash
    \? --> Question Mark
    */

    printf("To print new line: \\n\n");       // \n for new line.
    printf("To print horizontal tab: \\t\n"); // \t for horizontal tab or 4 space in horizontal line.
    printf("To print vertical tab: \\v\n");   //  \v for vertical tab or 4 space inn vertical line.
    printf("To print single quote: \\'\n");   //  \' for single quote.
    printf("To print double quote: \\\"\n");  //  \"  for double quote.
    printf("To print backslash: \\\\'\n");    // \\ for backslash.
    printf("To print question mark: \\\?\n"); // \? for question mark.
    printf("For bell tone: \\a\n");           // \a for alert(bell).

    return 0;
}