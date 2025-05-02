#include <stdio.h>

int main() {
    /*
    Declare uma matriz 5 x 5. Preencha com 1 a diagonal principal e com 0 os demais
    elementos. Escreva ao final a matriz obtida.
    */
    int mat[5][5];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == j) {
                mat[i][j] = 1;
            } else {
                mat[i][j] = 0;
            }
        }
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}