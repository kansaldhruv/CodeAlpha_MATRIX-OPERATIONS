#include <stdio.h>

#define SIZE 3

static void inputMatrix(int matrix[SIZE][SIZE], char name);
static void displayMatrix(const int matrix[SIZE][SIZE]);
static void addMatrices(const int mat1[SIZE][SIZE], const int mat2[SIZE][SIZE], int result[SIZE][SIZE]);
static void multiplyMatrices(const int mat1[SIZE][SIZE], const int mat2[SIZE][SIZE], int result[SIZE][SIZE]);
static void transposeMatrix(const int matrix[SIZE][SIZE], int result[SIZE][SIZE]);
static void clearInputBuffer(void);

int main(void) {
    int matA[SIZE][SIZE];
    int matB[SIZE][SIZE];
    int sum[SIZE][SIZE];
    int product[SIZE][SIZE];
    int transposeA[SIZE][SIZE];

    printf("=== Matrix Operations (3x3) ===\n\n");

    inputMatrix(matA, 'A');
    inputMatrix(matB, 'B');

    addMatrices(matA, matB, sum);
    printf("\nSum of Matrix A and Matrix B:\n");
    displayMatrix(sum);

    multiplyMatrices(matA, matB, product);
    printf("\nProduct of Matrix A and Matrix B:\n");
    displayMatrix(product);

    transposeMatrix(matA, transposeA);
    printf("\nTranspose of Matrix A:\n");
    displayMatrix(transposeA);

    return 0;
}

static void inputMatrix(int matrix[SIZE][SIZE], char name) {
    printf("Enter 9 values for Matrix %c, row by row.\n", name);

    for (int row = 0; row < SIZE; row++) {
        for (int col = 0; col < SIZE; col++) {
            while (1) {
                printf("Matrix %c[%d][%d]: ", name, row, col);

                if (scanf("%d", &matrix[row][col]) == 1) {
                    break;
                }

                printf("Invalid input. Please enter an integer.\n");
                clearInputBuffer();
            }
        }
    }

    printf("\n");
}

static void displayMatrix(const int matrix[SIZE][SIZE]) {
    for (int row = 0; row < SIZE; row++) {
        for (int col = 0; col < SIZE; col++) {
            printf("%d\t", matrix[row][col]);
        }
        printf("\n");
    }
}

static void addMatrices(const int mat1[SIZE][SIZE], const int mat2[SIZE][SIZE], int result[SIZE][SIZE]) {
    for (int row = 0; row < SIZE; row++) {
        for (int col = 0; col < SIZE; col++) {
            result[row][col] = mat1[row][col] + mat2[row][col];
        }
    }
}

static void multiplyMatrices(const int mat1[SIZE][SIZE], const int mat2[SIZE][SIZE], int result[SIZE][SIZE]) {
    for (int row = 0; row < SIZE; row++) {
        for (int col = 0; col < SIZE; col++) {
            int total = 0;

            for (int index = 0; index < SIZE; index++) {
                total += mat1[row][index] * mat2[index][col];
            }

            result[row][col] = total;
        }
    }
}

static void transposeMatrix(const int matrix[SIZE][SIZE], int result[SIZE][SIZE]) {
    for (int row = 0; row < SIZE; row++) {
        for (int col = 0; col < SIZE; col++) {
            result[col][row] = matrix[row][col];
        }
    }
}

static void clearInputBuffer(void) {
    int ch;

    while ((ch = getchar()) != '\n' && ch != EOF) {
    }
}