#include <stdio.h>
#include <Windows.h>
void main(){
    char First_name[] = "";
    char Surname[] = "";
    printf("Enter first name: ");
    scanf("%s", &First_name);
    printf("Enter surname: ");
    scanf("%s", &Surname);
    printf("Welcome to C programming %s %s",First_name,Surname);
    Sleep(30);
}
