// CODE FOR: Data type and Variable Part 1.

/*
    Different types of Data types:
    1. Basic Data types: int, float, double, char, void(absence of data types).
    2. Derived Data types: Array, Structures, Pointers, Union, Enum.
        [Derived data types are created using basic data types]

    Data_type        Example               Keyword                  Memory_size             Format_specifier
    Integer -------- 125,300 ------------- int -------------------- 4 bytes --------------- %d or %i
    Float ---------- 6 decimal place ----- float ------------------ 4 bytes --------------- %f
    Double --------- 15 decimal place ---- double ----------------- 8 bytes --------------- %lf
    Character ------ 'A','b','6','$' ----- char ------------------- 1 bytes --------------- %c
*/

/*
    Variable:
    Declaration --> Datatypes_variable name;                          ex: int num1; char name;
    Value Assign --> (After declaration)  variable name = value;      ex: num1 = 4; name = 'T';
    Initialize ----> Datatypes_variable name = value;                 ex int num2 = 22; char name2 = 'O';

    [NOTE: You can declar and initialize multiple variable in one line.]
*/

#include <stdio.h>

int main()
{
    // Variable Declaration
    int num1;
    float fnum1;
    double dnum1;
    char c;
    // Value Assign
    num1 = 69;
    fnum1 = 45.98;
    dnum1 = 99.7648;
    c = 'T';

    // Initialization
    int num2 = 67;
    float fnum2 = 88.635;
    double dnum2 = 34.363823;
    char c2 = 'H';

    // Multiple variable at once
    int num3 = 89, num4 = 109, num5 = 999;
    float fnum3 = 46.94, fnum4 = 73.393, fnum5 = 8333.238;
    double dnum3 = 6549.38488, dnum4 = 73639.29373, dnum5 = 8263.3628;

    return 0;
}
