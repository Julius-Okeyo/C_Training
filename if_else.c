#include <stdio.h>
#include <math.h>
#include <Windows.h>

int main(){
    int a;
    int b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("\nEnter second number: ");
    scanf("%d", &b);
    if (a < b){
        printf("%d is less that %d",a,b);
        printf("\nSum = ",a+b);
    }
    else{
        printf("%d is less than %d",b,a);
        printf("Difference = ",a-b);
    }
    Sleep(30);
}