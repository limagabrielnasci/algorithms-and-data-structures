#include <stdio.h>

int main() {
    /*
    Escreva um programa que leia 10 numeros e escreva o menor valor lido e o maior valor ´
    lido
    */
    int n, maior = 0, menor = 99999999;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &n);
        if (n > maior) {
            maior = n;
        }
        if (n < menor) {
            menor = n;
        }
    }
    printf("maior = %d\nmenor = %d\n", maior, menor);
}