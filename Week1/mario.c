#include <stdio.h>

void print_bricks(int h, int w);

int main(void) {
  int x;
  int y;
  printf("Enter the height: ");
  scanf("%d", &x);
  printf("Enter the width: ");
  scanf("%d", &y);
  print_bricks(x, y);
}

void print_bricks(int h, int w) {
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      printf("#");
    }
    printf("\n");
  }
}