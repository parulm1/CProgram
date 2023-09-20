#include <stdio.h>
int main() {
   int col, space, rows, k = 0;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   
   for (col = 1; col <= rows; col++) 
   {
      for (space = 1; space <= rows - col; ++space) 
      {
         printf("  ");
      }
      for (k=0;k != 2 * col - 1;++k) 
      {
         printf("* ");
      }
      printf("\n");
   }
   return 0;
}