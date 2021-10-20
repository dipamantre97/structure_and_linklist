#include "header.h"
int main() {
   int mat1[R][C];
   int mat2[R][C];
   int product[R][C];
   printf("Enter elements in first matrix of size 3x3\n");
   Input(mat1);
   printf("Enter elements in second matrix of size 3X3\n");
   Input(mat2);
   Multiply(mat1, mat2, product);
   printf("Product of both matrices is : \n");
   Print(product);
   sorting(product);
   return 0;
}
void Input(int mat[][C]) {
   int i,j;
   for (i= 0; i < R; i++) {
      for (j = 0; j < C; j++) {
         scanf("%d", (*(mat + i) + j));
      }
   }
}
void Print(int mat[][C]) {
   int i,j;
   for (i = 0; i < R; i++) {
      for (j = 0; j < C; j++) {
         printf("%d ", *(*(mat + i) + j));
         }
      printf("\n");
   }
}
void Multiply(int mat1[][C], int mat2[][C], int res[][C]) {
   int j,k,i;
   int sum;
   for (i= 0; i < R; i++) {
      for (j = 0; j < C; j++) {
         sum = 0;
         for (k = 0; k < C; k++) {
            sum += (*(*(mat1 + i) + k)) * (*(*(mat2 + k) + j));
         }
         *(*(res + i) + j) = sum;
      }
   }
}
