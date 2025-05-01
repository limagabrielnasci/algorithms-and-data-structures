#include <stdio.h>

int main() {
    // Crie um programa que le 6 valores inteiros e, em seguida, mostre na tela os valores lidos
    int vet[6];
    for (int i = 0; i < 6; i++) {
        scanf("%d", &vet[i]);
    }
    for (int i = 0; i < 6; i++) {
        printf("%d\n", vet[i]);
    }
}