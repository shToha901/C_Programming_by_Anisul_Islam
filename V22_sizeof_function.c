// CODE FOR: Use of sizeof() function.

/*
    sizeof is a function which take any data types or variable as an argument to show its size in the memory
    Structure:
    sizeof(variable/data_types);
*/

#include <stdio.h>

int main()
{
    int i;
    float j;
    double k;

    printf("Size of integer is: %d bytes\n", sizeof(i));      // variable as argument
    printf("Size of float is: %d bytes\n", sizeof(j));        // variable as argument
    printf("Size of double is: %i bytes\n", sizeof(k));       // variable as argument
    printf("Size of character is: %d bytes\n", sizeof(char)); // data_types as argument

    return 0;
}