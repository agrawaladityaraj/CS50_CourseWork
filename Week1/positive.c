#include <stdio.h>

int get_positive(void);

int main(void) {
  int i = get_positive();
  printf("%i\n", i);
}

int get_positive(void) {
  int n;
  do {
    printf("Enter a positive integer: ");
    scanf("%d", &n);
  } while (n < 1);
  return n;
}