#include <stdio.h>

int main(void) {
  int n;
  printf("Enter number of times: ");
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    printf("Hello world\n");
  }
}