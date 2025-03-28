#include <stdio.h>

#define MAX_SIZE 100

void makeIdentityMatrix(int A[][MAX_SIZE], int N) {
    for (int k = 0; k < N; k++) {
        for (int i = 0; i < N; i++) {
            if (i == k) {
                A[k][i] = 1;  
            }
            else {
                A[k][i] = 0;  
            }
        }
    }
}

int main() {
    int A[MAX_SIZE][MAX_SIZE];
    int N;


    printf("Enter the size of the matrix A (N x N): ");
    scanf_s("%d", &N);

    makeIdentityMatrix(A, N);


    printf("Matrix A (Identity Matrix):\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}