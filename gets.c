#include <stdio.h>
#include <Windows.h>
void main(){
    char First_name[8] = "";
    char Surname[8] = "";
    printf("Enter first name: ");
    gets(First_name);
    printf("Enter surname: ");
    gets(Surname);
    printf("Welcome to C programming %s %s",First_name,Surname);
    Sleep(30);
}