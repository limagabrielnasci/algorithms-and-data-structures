#include <stdio.h>

int main() {
    /*
    Leia uma matriz 5 x 5. Leia tambem um valor ´ X. O programa devera fazer uma busca ´
    desse valor na matriz e, ao final, escrever a localizac¸ao (linha e coluna) ou uma mensa- ˜
    gem de “nao encontrado”.
    */
    int mat[5][5], x, found = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("[%d][%d]: ", i, j);scanf("%d", &mat[i][j]);
        }
    }
    printf("value to search: ");scanf("%d", &x);
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (mat[i][j] == x) {
                printf("row: %d\nColumn: %d\n", i, j);
                found = 1;
            }
        }
    }
    if (!found) {
        printf("value not found\n");
    }
}