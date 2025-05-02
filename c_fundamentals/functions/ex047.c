#include <stdio.h>
#define MATRIX_SIZE 4

int isGreaterThanTen(int matrix[][MATRIX_SIZE]);

int main() {
    /*
    Fac¸a uma func¸ao que receba uma matriz 4 x 4 e retorne quantos valores maiores do que ˜
    10 ela possui.
    */
    int matrix[MATRIX_SIZE][MATRIX_SIZE];
    for (int i = 0; i < MATRIX_SIZE; i++) {
        for (int j = 0; j < MATRIX_SIZE; j++) {
            printf("[%d][%d]: ", i, j); scanf("%d", &matrix[i][j]);
        }
    }
    int count = isGreaterThanTen(matrix);
    printf("%d\n", count);
}

int isGreaterThanTen(int matrix[][MATRIX_SIZE]) {
    int count = 0;
    for (int i = 0; i < MATRIX_SIZE; i++) {
        for (int j = 0; j < MATRIX_SIZE; j++) {
            if (matrix[i][j] > 10)
                count++;
        }
    }
    return count;
}