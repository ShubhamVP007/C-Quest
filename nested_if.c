#include<stdio.h>

int main() {

int num;

printf("enter a number(1-100) : ");
scanf("%d", &num);

if(num >= 0  && num <= 100) {
  if(num % 2 == 0) {
    printf("Even");
  }
  else {
    printf("Odd");
  }
}
return 0;

}
