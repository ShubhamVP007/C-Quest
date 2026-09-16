#include<stdio.h>

int main() {
    int num1, num2;

    printf("enter two numbers : ");
    scanf("%d %d", &num1, &num2);

    printf("sum = %d\n", num1 + num2);

    printf("difference = %d\n", num1 - num2);

    printf("product = %d\n", num1 * num2);

    printf("division = %d\n", num1 / num2);

    printf("modulus (remainder) = %d\n", num1 % num2);

    return 0;
}