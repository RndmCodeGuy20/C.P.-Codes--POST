#include<stdio.h>
#include<conio.h>

int main() {
   int i, space, rows, k = 0, m = 0, n = 0;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i) {
      for (space = 1; space <= rows - i; ++space) {
         printf("  ");
         ++m;
      }
      while (k != 2 * i - 1) {
         if (m <= rows - 1) {
            printf("%d ", i + 3*k);
            ++m;
         } 
         else {
            n++;
            printf("%d ",i + 3*n -3);
         }
         k++;
      }
      n = m = k = 0;
      printf("\n");
   }
   return 0;
}