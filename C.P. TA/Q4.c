#include <stdio.h>
int main()
{
  int n, j, row, t = 1;
  printf("Enter the number of rows needed: ");
  scanf("%d", &n);

  for (row = 1; row <= n; row++) {
    for (j = 1; j <= n - row; j++)
      printf(" ");

    t = row;

    for (j = 1; j <= row; j++) {
      printf("%d", t);
      t++;
    }

    t = t - 2;

    for (j = 1 ; j < row; j++) {
      printf("%d", t);
      t--;
    }

    printf("\n");
  }

  return 0;
}