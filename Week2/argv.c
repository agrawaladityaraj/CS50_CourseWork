#include <stdio.h>

int main(int argc, char argv) {
  if (argc == 2) {
    printf("hello, %s\n", argv);
  } else {
    printf("hello world");
  }
}