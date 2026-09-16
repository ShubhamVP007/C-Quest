#include<stdio.h>
#include<stdbool.h>

int main(){
    int a;

    bool b;
    
    char c;
    
    double d;

    printf("int : %zu bytes\n", sizeof(int));

    printf("Double : %zu bytes\n", sizeof(double));

    printf("Char : %zu bytes\n", sizeof(char));

    printf("Bool : %zu bytes\n", sizeof(bool));

    printf("Float : %zu bytes\n", sizeof(float));
    
}