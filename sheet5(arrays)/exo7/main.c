#include <stdio.h>
#include <stdbool.h>

#define N 5 // size of the matrix

int main() {
  // declare a matrix of integers
  int matrix[N][N];

  // declare a boolean variable to store the result
  bool result = true;

  // prompt the user to enter the matrix elements
  printf("Enter the elements of the matrix:\n");
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      scanf("%d", &matrix[i][j]);
    }
  }

  // loop through the lower triangular part of the matrix
  for (int i = 1; i < N; i++) {
    for (int j = 0; j < i; j++) {
      // if any element below the main diagonal is non-zero, set result to false and break the loop
      if (matrix[i][j] != 0) {
        result = false;
        break;
      }
    }
    // if result is already false, break the outer loop
    if (!result) {
      break;
    }
  }

  // print the result
  if (result) {
    printf("The matrix is upper triangular.\n");
  } else {
    printf("The matrix is not upper triangular.\n");
  }

  return 0;
}
