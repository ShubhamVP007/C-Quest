#include<stdio.h>

int main() {
  int arr[2][2];
int i,j, sum = 0;

printf("enter 4 elements");

for(i = 0; i < 2; i++) {
  for(j = 0; j < 2; j++) {
    scanf("%d", &arr[i][i]);
    sum += arr[i][j];
  }
}

printf("sum = %d", sum);
return 0;
}
