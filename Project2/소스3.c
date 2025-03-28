#include <stdio.h>

#define MAX_SIZE 100

// A�� ���� ��ķ� ����� �Լ�
void makeIdentityMatrix(int A[][MAX_SIZE], int N) {
    for (int k = 0; k < N; k++) {
        for (int i = 0; i < N; i++) {
            if (i == k) {
                A[k][i] = 1;  // �ִ밢�� ���Ҹ� 1�� ����
            }
            else {
                A[k][i] = 0;  // ������ ���Ҵ� 0���� ����
            }
        }
    }
}

// B�� ��ġ����� ���ϴ� �Լ�
void transposeMatrix(int A[][MAX_SIZE], int B[][MAX_SIZE], int N, int M) {
    for (int k = 0; k < N; k++) {
        for (int i = 0; i < M; i++) {
            B[i][k] = A[k][i];  // B�� ��ġ����� ����
        }
    }
}

int main() {
    int A[MAX_SIZE][MAX_SIZE], B[MAX_SIZE][MAX_SIZE];
    int N, M;

    // ��� ũ�� �Է�
    printf("Enter the size of the matrix A (N x N): ");
    scanf_s("%d", &N);

    // A ��� �Է�
    printf("Enter the elements of matrix A:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf_s("%d", &A[i][j]);
        }
    }

    // A�� ���� ��ķ� ����
    makeIdentityMatrix(A, N);

    // B ��� ũ�� �Է� (N x M)
    printf("Enter the size of matrix B (N x M): ");
    scanf_s("%d", &M);

    // B ����� ��ġ��� ���ϱ�
    transposeMatrix(A, B, N, M);

    // ��� ���: ���� ��� A ���
    printf("Matrix A (Identity Matrix):\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    // ��� ���: ��ġ ��� B ���
    printf("Matrix B (Transpose of A):\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    return 0;
}
