#include <stdio.h>

int main() {
  // declare a 4 x 5 integer matrix
  int matrix[4][5];

  // declare variables to store the number of negative, positive, and zero numbers
  int negative = 0, positive = 0, zero = 0;

  // prompt the user to enter the matrix elements
  printf("Enter the elements of the 4 x 5 matrix:\n");

  // use nested loops to read the matrix elements from the user
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 5; j++) {
      // read an element and store it in the matrix
      scanf("%d", &matrix[i][j]);

      // check if the element is negative, positive, or zero and update the corresponding variable
      if (matrix[i][j] < 0) {
        negative++;
      } else if (matrix[i][j] > 0) {
        positive++;
      } else {
        zero++;
      }
    }
  }

  // display the number of negative, positive, and zero numbers
  printf("The number of negative numbers is %d\n", negative);
  printf("The number of positive numbers is %d\n", positive);
  printf("The number of zero numbers is %d\n", zero);

  return 0;
}
