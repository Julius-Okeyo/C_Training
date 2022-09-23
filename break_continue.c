#include <stdio.h>
#include <math.h>
#include <Windows.h>

void main(){
    int a = 0;
    int b = 0;
    scanf("%d", &b);
    for (a>=0;a<10000;a+=1){
        if (a == b){
            //The loop skips to the next iteration ignoring the remaining lines of code.
            //If b == 30 the integer 30 will not be printed.
            continue;
        }
        printf("%d",a);
        Sleep(360);
        if (a - b == 2){
            break;
            //The loop terminates completely.
        }
    }
}
