#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
  char name[6];
  printf("Enter name: ");
  scanf("%s", name);
  for (int i = 0, n = strlen(name); i < n; i++) {
    printf("%c", toupper(name[i]));
  }
  printf("\n");
}