# Matrix Operations

This project is a small C program that demonstrates basic 3x3 matrix operations.
It asks for values for two matrices, then prints the following results:

- the sum of Matrix A and Matrix B
- the product of Matrix A and Matrix B
- the transpose of Matrix A

## What the Program Does

The program is designed for beginners who want to understand how matrix operations work in C.
It uses fixed-size 3x3 integer arrays and simple nested loops to perform each calculation.

## Requirements

- A C compiler such as GCC, Clang, or MinGW
- A terminal or command prompt

## Build

Compile the program from the repository folder:

```bash
gcc MATRIX_OPS.C -o matrix_ops.exe
```

If you are on Linux or macOS, you can choose a different output name if you prefer:

```bash
gcc MATRIX_OPS.C -o matrix_ops
```

## Run

```bash
matrix_ops.exe
```

On Linux or macOS, run the binary name you chose during compilation:

```bash
./matrix_ops
```

## How To Use

1. Enter 9 integers for Matrix A.
2. Enter 9 integers for Matrix B.
3. Read the printed result for each operation.

The input order is row by row, starting from element `[0][0]`.

## Example

If Matrix A is:

```text
1 2 3
4 5 6
7 8 9
```

and Matrix B is:

```text
9 8 7
6 5 4
3 2 1
```

the program will display the sum, product, and transpose of Matrix A.

## Files

- [MATRIX_OPS.C](MATRIX_OPS.C) - main source code
- [README.md](README.md) - project overview and usage guide

## Repository

Remote source: https://github.com/kansaldhruv/CodeAlpha_MATRIX-OPERATIONS.git