#include <stdio.h>

int main() {
    /*
    Fac¸a um programa que preenche uma matriz 4 x 4 com o produto do valor da linha e da
    coluna de cada elemento. Em seguida, imprima na tela a matriz.
    */
    int mat[4][4];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            mat[i][j] = i * j;
        }
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}