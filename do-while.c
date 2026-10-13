#include<stdio.h>

int main() {
  int number;
  int largest;

printf("enter a number : ");
scanf("%d", &number);

do {

  printf("enter a number : ");
  scanf("%d\n", &number);

  if(number != 0 && number > largest) {
    largest = number;
  }
while (number != 0);
printf("largest = %d\n", largest);

return 0;

}
