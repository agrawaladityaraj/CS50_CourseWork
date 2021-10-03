#include <stdio.h>

int main(void) {
  char chars[] = {'a', 'd', 'e', 't', 'f', 'r', 'h'};

  for (int i = 0; i < 7; i++) {
    if(chars[i] == 'e') {
      printf("Found\n");
      return 0;
    }
  }
  printf("Not Found\n");
  return 1;
}