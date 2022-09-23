#include <stdio.h>
#include <Windows.h>

void main(){
    printf("Enter command (p,s,l, or c): ");
    switch(getchar()){
        case 'p': 
        printf("The printf command lets you display characters on the standard output device.");
        Sleep(360);
        ;break;
        case 's':
        printf("The scanf command lets the program read user inputs into a standard input device");
        Sleep(360);
        break;
        case 'l':
        printf("Loops help the program perform iteration");
        Sleep(360);
        break;
        case 'c':
        printf("Conditional statements help the program chose between different paths.");
        Sleep(360);
        break;
    }
}
