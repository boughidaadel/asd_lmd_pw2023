#include <stdio.h>

#define ROWS 3
#define COLS 5

// element-wise multiplication (not multiplication matrix)
int main() {
    int A[ROWS][COLS], B[ROWS][COLS], C[ROWS][COLS];
    int i, j;

    printf("Enter elements of matrix A:\n");
    for(i = 0; i < ROWS; i++) {
        for(j = 0; j < COLS; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of matrix B:\n");
    for(i = 0; i < ROWS; i++) {
        for(j = 0; j < COLS; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    for(i = 0; i < ROWS; i++) {
        for(j = 0; j < COLS; j++) {
            C[i][j] = A[i][j] * B[i][j];
        }
    }

    printf("Resultant Matrix C is:\n");
    for(i = 0; i < ROWS; i++) {
        for(j = 0; j < COLS; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
