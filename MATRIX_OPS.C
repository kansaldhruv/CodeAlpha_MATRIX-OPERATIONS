#include <stdio.h>

#define SIZE 3

// Function prototypes
void inputMatrix(int matrix[SIZE][SIZE], char name);
void displayMatrix(int matrix[SIZE][SIZE]);
void addMatrices(int mat1[SIZE][SIZE], int mat2[SIZE][SIZE], int result[SIZE][SIZE]);
void multiplyMatrices(int mat1[SIZE][SIZE], int mat2[SIZE][SIZE], int result[SIZE][SIZE]);
void transposeMatrix(int matrix[SIZE][SIZE], int result[SIZE][SIZE]);

int main() {
    int matA[SIZE][SIZE], matB[SIZE][SIZE];
    int sum[SIZE][SIZE], product[SIZE][SIZE], transposeA[SIZE][SIZE];

    printf("=== Matrix Operations (3x3) ===\n\n");
    
    // Get matrix inputs
    inputMatrix(matA, 'A');
    inputMatrix(matB, 'B');

    // 1. Matrix Addition
    addMatrices(matA, matB, sum);
    printf("\n--- Matrix A + Matrix B ---\n");
    displayMatrix(sum);

    // 2. Matrix Multiplication
    multiplyMatrices(matA, matB, product);
    printf("\n--- Matrix A * Matrix B ---\n");
    displayMatrix(product);

    // 3. Transpose of Matrix A
    transposeMatrix(matA, transposeA);
    printf("\n--- Transpose of Matrix A ---\n");
    displayMatrix(transposeA);

    return 0;
}

// Function to input matrix elements
void inputMatrix(int matrix[SIZE][SIZE], char name) {
    printf("Enter elements for 3x3 Matrix %c:\n", name);
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\n");
}

// Function to display a matrix
void displayMatrix(int matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function for Matrix Addition
void addMatrices(int mat1[SIZE][SIZE], int mat2[SIZE][SIZE], int result[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

// Function for Matrix Multiplication
void multiplyMatrices(int mat1[SIZE][SIZE], int mat2[SIZE][SIZE], int result[SIZE][SIZE]) {
    // Initialize result matrix to 0
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            result[i][j] = 0;
        }
    }

    // Multiply matrices
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            for (int k = 0; k < SIZE; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

// Function for Matrix Transpose
void transposeMatrix(int matrix[SIZE][SIZE], int result[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            result[j][i] = matrix[i][j];
        }
    }
}