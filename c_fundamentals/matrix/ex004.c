#include <stdio.h>

int main() {
    /*
    Leia uma matriz 4 x 4, imprima a matriz e retorne a localizac¸ao (linha e a coluna) do ˜
    maior valor.
    */
    int mat[4][4], g = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &mat[i][j]);
            if (mat[i][j] > g) {
                g = mat[i][j];
            }
        }
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (mat[i][j] == g) {
                printf("%d %d\n", i, j);
            }
        }
    }
}