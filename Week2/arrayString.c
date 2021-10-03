#include <stdio.h>
#include <string.h>

int main(void) {
  char name[20];
  printf("Enter name: ");
  scanf("%s", name);
  for (int i = 0; i < strlen(name); i++) {
    printf("%c", name[i]);
  }
  printf("\n");
}
