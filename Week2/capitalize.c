#include <stdio.h>
#include <string.h>

int main(void) {
  char name[6];
  printf("Enter name: ");
  scanf("%s", name);
  for (int i = 0, n = strlen(name); i < n; i++) {
    if (name[i] >= 'a' && name[i] <= 'z') {
      printf("%c", name[i] - 32);
    } else {
      printf("%c", name[i]);
    }
  }
  printf("\n");
}