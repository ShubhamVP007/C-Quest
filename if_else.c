#include<stdio.h>

int main() {
  int rollNo;

printf("enter your roll No : ");
scanf("%d", &rollNo);

if (rollNo < 25 && rollNo >= 0) {
  printf("Section A");
}
else if (rollNo > 25) {
  printf("Section B");
}
else {
printf("Section C");
}

return 0;

}

