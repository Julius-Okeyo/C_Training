#include <stdio.h>
#include <Windows.h>

int main(){
    int a = 10;
    do{
        printf("%d is divisible by 5.\n",a);
        a+=5; 
        Sleep(360);
    } while (a <= 100);
}
