// CODE FOR: getchar(), putchar(), gets(), puts(), fgets(), getch() function.

    /*
    getchar() & putchar() work as same as taking input of a char using scanf and printf.
    Structure:
    variable_name = getchar();
    putchar(variable_name);

    gets() & puts() does the same as scanf() & printf(). When we take string as input using
    scanf and print it using printf the remaining after a space don't get printed. To avoid
    this type of error we use gets() function. But gets() is also unsafe because we don't
    know how many chracter we are going to read.
    However we can solve this problem using fgets().
    Structure:
    gets(string_name);
    puts(string_name);
    fgets(string_name, sizeof(string_name), stdin);
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char character, name[50], name2[50], name3[50];

    // Use of gets(), puts(), fgets()

    /*
        The problem with printf, scanf is while taking a string inputed with a space in it
        we cann't print the string after the space. To solve this problem we use gets()
    */
    printf("\n\nEnter your name with a space: "); // String input using gets()
    gets(name);
    printf("Hello ");
    puts(name);

    /*
        The problrm with gets() is we don't know how many characters we are going to read.
        To specify the string length we use fgets() function.
    */
    printf("\nEnter your name with a space: "); // String using fgets()
    fgets(name2, sizeof(name2), stdin);         // String of size name2[50]
    printf("Hello ");
    puts(name2);

    /*
        There is another problem in fgets() function. After writing the string when we press enter
        button the compiler take this enter as a part of the string. To tackel this problem we have
        to write a short logic.
    */
    printf("Enter your name with a space: "); // Taking input with fgets and print it without new line in string
    fgets(name3, sizeof(name3), stdin);
    size_t len = strlen(name3); // size_t is used for non negative memory allocation.To use starlen first include string header file. strlen gives the length of a string.

    if (name3[len - 1] == '\n')
        ; // Logic for not to print enter in string
    {
        name3[len - 1] = '\0';
    }
    printf("Hello ");
    puts(name3);

    // Use of getchar() & putchar()
    printf("Enter a character: ");
    character = getchar(); // getchar() is used to take input of a character
    printf("You enetered: ");
    putchar(character); // putchar() is used to print a inputed character

    // We can use getch() insted of return 0;
    getch();
}