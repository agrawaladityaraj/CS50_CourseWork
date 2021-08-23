#include <stdio.h>

int main(void) {
  int x;
  int y;
  printf("Enter first integer: ");
  scanf("%d", &x);
  printf("Enter second integer: ");
  scanf("%d", &y);
  printf("%d\n", x + y);
}