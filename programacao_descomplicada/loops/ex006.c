#include <stdio.h>

int main() {
    /*
    Fac¸a um programa que leia 10 inteiros positivos, ignorando nao positivos, e imprima sua ˜
    media.
    */
    float p, soma = 0, media;
    for (int i = 0; i < 10; i++) {
        scanf("%f", &p);
        soma += p;
    }
    media = soma / 10;
    printf("media = %.2f\n", media);
}