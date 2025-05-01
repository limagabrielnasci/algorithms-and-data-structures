#include <stdio.h>

int main() {
    /*
    Fac¸a um programa que leia 10 inteiros positivos, ignorando nao positivos, e imprima sua ˜
    media. 
    */
    float soma = 0, media;
    int i = 0, v;
    do {
        scanf("%d", &v);
        while (v <= 0) {
            printf("valor invalido tente de novo\n");
            scanf("%d", &v);
        }
        if (v > 0) {
            soma += v;
        }
        i++;
    } while (i < 10);
    media = soma / 10.0;
    printf("media = %f\n", media);
}