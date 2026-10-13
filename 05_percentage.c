#include<stdio.h>

int main() {
  float marks, total, percentage;

printf("enter marks obtained : ");
scanf("%f", &marks);

printf("enter total marks : ");
scanf("%f", &total);

percentage = (marks / total) * 100;

printf("percentage = %.2f%\n", percentage);

return 0;

}
