#include <stdio.h>

int main(void) {
  int n;
  printf("Enter the number of students: ");
  scanf("%d", &n);
  int scores[n];
  printf("Enter the scores: \n");
  for (int i = 0; i < n; i++) {
    printf("%i: ", i);
    scanf("%d", &scores[i]);
  }
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += scores[i];
  }
    printf("Average: %f\n", (sum) / (float) n);
}