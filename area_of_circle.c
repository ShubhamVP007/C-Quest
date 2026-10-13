#include<stdio.h>

#define Pi 3.14159

int main() {

  float Radius, area;

printf("enter the radius : ");
scanf("%f", &Radius);

area = Pi * Radius * Radius;

printf("area of circle = %.2f\n", area);

return 0;

}
