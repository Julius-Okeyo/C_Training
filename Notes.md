## Reserved Words
C has a very short list of reserved words, and they should be committed to memory. The C reserved words are (loosely grouped in order of appearance in the text) as follows:
[int, float, double, char, long, short, unsigned, sizeof Words]

[if, else, for, do, while, break, continue, switch, case, default, goto]

[return, void, extern, auto, static, register]

[struct, union, typedef]

## Variable names
May consist of any combination of letters and numbers, but they must begin with an alphabetic
character. In C, the underscore (_) is considered to be an alphabetic
character.

## Data types
There are four fundamental data types in the C language:
int: integer; counting numbers ... -2, -1 , 0, 1, 2...
float: real; floating point numbers 3.1416; -0.0003
double: double-sized reals larger values
char: single-byte characters A, b, &, *
C interprets a Boolean false as a zero value and any other value as true

## Unary Operators
Unary operators work with a single variable or constant. The most
well-known is arithmetic negation, the minus sign (—). In some cases
the unary plus sign (+) may be used for program clarity, but positive
is the assumed sign of constants. Both of these operators are used in
Fortran and C; however, C provides three additional unary operators
that Fortran does not. The C increment (++) and decrement ( )
operators are used either to add one or subtract one from a variable.
These operators provide the following equivalences:
X = X + 1; <& X+ = 1; ^ ++X;
Y=Y-1;&Y- = 1;& Y;

The unary sizeof() function returns the number of bytes that a data type,
variable, or constant uses in the program.
The sizeof () function is
very useful when working with arrays and structures and when using
dynamic memory allocation. This function is critical when writing
code that is sensitive to data type size. If extended precision for
calculations is necessary, your program can use sizeof() to test the hardware
to verify that adequate variable storage size is present.

