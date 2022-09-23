## Reserved Words
C has a very short list of reserved words, and they should be committed
to memory. The C reserved words are (loosely grouped in order of appearance
in the text) as follows:
[int, float, double, char, long, short, unsigned, sizeof Words]

[if, else, for, do, while, break, continue, switch, case, default, goto]

[return, void, extern, auto, static, register]

[struct, union, typedef]

## Variable names
May consist of any combination of letters and numbers, but they must
begin with an alphabetic
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

## Writing Strings Using printf and puts
The standard format specifier for printing strings with printf is %s
The width parameter can be used to print a short string in a long space
The .precision parameter limits the length of longer strings.
int puts ( const char * str );
Writes the string out to standard output ( the screen ) and automatically
appends a newline character at the end.
This is a lower-level routine that printf, without formatting, and possibly faster.

## Reading Strings Using scanf, gets, and fgets
The standard format specifier for reading strings with scanf is %s
scanf reads in a string of characters, only up to the first non-whitespace
character. I.e. it stops reading when it encounters a space, tab, or newline character.
scanf appends a null byte to the end of the character string stored.
scanf does skip over any leading whitespace characters in order to find the first
non-whitespace character.
The width field can be used to limit the maximum number of characters read.
The argument passed to scanf needs to be of type pointer-to-character, i.e. char *, and is
normally the name of a char array. ( In this case the size of the array -1 should be given
as the width field, to make sure scanf can append the null byte without overflowing the array.
char * gets ( char * str );
The gets function will read a string of characters from standard input ( the keyboard ) until
it encounters either a newline character or the end of file.
Unlike scanf, gets does not care about spaces in the input, treating them the same as any
other character.
Note that gets has no provision for limiting the number of characters read, leading to possible
overflow problems.
When gets encounters a new line character, it stops reading, but does NOT store it.
A null byte is always appended to the end of the string of stored characters.
char * fgets ( char * str, int num, FILE * stream );
fgets is equivalent to gets, except for two additional arguments and one key difference:
num provides for a limit on the maximum number of characters read
The FILE * argument allows fgets to read from any file. stdin may be entered to read from the keyboard.
fgets stops reading when it encounters a new line character, and it DOES store the newline character.
A null byte is always appended to the end of the string of stored characters.

## Formatted Output
Formatted output means that the values to be outputted must
conform to a format specified by the user. For example, if you have
a floating point result that you want to output at a fixed precision,
you can specify the desired precision to the output function.
The basic format for a printf statement to output an ASCII string
is as follows:
printf("Hello World! \n" );
All the characters within the quotes will be sent to the console
(printed to the screen). The backslash-n (\n) is called an escape character
and causes printf to output a newline. The newline is a combination carriage
return and linefeed, such as on a typewriter. This just
causes the screen cursor to move to the next line down. If you omit
the newline, the data output by the next printf will start just after the
exclamation point. For example,
printf("Hell o World!");
printf ("How are you?\n");
will output
Hello World! How are you?
Several clever outputs can be achieved using just printf and various escape
characters. For example, the tab (\t) character can be
used to align tabular data. If your program needs to alert the user to a condition,
when you output the alert (\a) character the console
bell or beeper will sound. Table 3.8 lists the more common escape
characters that can be used with printf.
If you need to output either a double quote (") or a back slash(\),
then you must precede these characters with a backslash(\). This is
called escaping the character. For example,
printf("\"Hell o World!\"\n " ) ;
outputs a quoted "Hello World!", whereas
printf ("It's either\\o r . \n" ) ;
outputs It's either\or.
The quoted characters inside the parentheses of the printf are
called the format string. If we want to output the values of variables,
we must include special formatting characters within this string.
Consider the printf statement below and assume that the variables
/ = 1, / = 2, and k = 3 have been declared integers:
print f (" i = %d j = %d k = %d\n" , i , j , k) ;
This printf will output:
i = 1 j = 2 k = 3
The variables whose values are to be output are placed following
the control string and separated by commas. The %d terms in the
control string are formatting characters that indicate that integer
values are to be printed. Note the one-to-one correspondence between
the three formatting characters (%d) and the variables. The percent
symbol (%) is used by printf to determine how a variable is to be
outputted. The symbol must be followed by a conversion character
that indicates how the variable value is to be interpreted. Table 3.9
lists a subset of conversion characters recognized by printf that will
be useful to you in your programming:

## Control Flow
When a continue statement is encountered during the execution of a loop,
statementup at the next increment. A break statement causes the loop to
terminate immediately. The continue and break statements are used with if
statements that test whether to skip loop execution statements or to
terminate the loop for some reason.
When algorithm requirements indicate that statements should
be executed until a condition evaluates true, the C do-while loop
structure is used. A do-while statement has the following syntax:
do <statement> while(<expression>);
