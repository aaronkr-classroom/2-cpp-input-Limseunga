#include <stdio.h>

#define MAX_SIZE 100

// A를 단위 행렬로 만드는 함수
void makeIdentityMatrix(int A[][MAX_SIZE], int N) {
    for (int k = 0; k < N; k++) {
        for (int i = 0; i < N; i++) {
            if (i == k) {
                A[k][i] = 1;  // 주대각선 원소를 1로 설정
            }
            else {
                A[k][i] = 0;  // 나머지 원소는 0으로 설정
            }
        }
    }
}

// B의 전치행렬을 구하는 함수
void transposeMatrix(int A[][MAX_SIZE], int B[][MAX_SIZE], int N, int M) {
    for (int k = 0; k < N; k++) {
        for (int i = 0; i < M; i++) {
            B[i][k] = A[k][i];  // B의 전치행렬을 구함
        }
    }
}

int main() {
    int A[MAX_SIZE][MAX_SIZE], B[MAX_SIZE][MAX_SIZE];
    int N, M;

    // 행렬 크기 입력
    printf("Enter the size of the matrix A (N x N): ");
    scanf_s("%d", &N);

    // A 행렬 입력
    printf("Enter the elements of matrix A:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf_s("%d", &A[i][j]);
        }
    }

    // A를 단위 행렬로 만듦
    makeIdentityMatrix(A, N);

    // B 행렬 크기 입력 (N x M)
    printf("Enter the size of matrix B (N x M): ");
    scanf_s("%d", &M);

    // B 행렬의 전치행렬 구하기
    transposeMatrix(A, B, N, M);

    // 결과 출력: 단위 행렬 A 출력
    printf("Matrix A (Identity Matrix):\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    // 결과 출력: 전치 행렬 B 출력
    printf("Matrix B (Transpose of A):\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    return 0;
}
