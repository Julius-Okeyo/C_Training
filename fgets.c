#include<stdio.h>
void main(){
    FILE *fp;
    char str[10];
    fp = fopen("C:/Users/User/target.txt","r");
    fgets(str,10,fp);
    printf("The target IPs are: ",str);
}