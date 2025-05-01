#include <stdio.h>

int main() {
    // Leia uma matriz 4 x 4, conte e escreva quantos valores maiores que 10 ela possui.
    int mat[4][4], maiorQDez = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
            if (mat[i][j] > 10) {
                maiorQDez++;
            }
        }
    }
    printf("maior que dez = %d\n", maiorQDez);
}