#include <stdio.h>

int main() {
    // Fac¸a um programa que calcule e mostre a soma dos 50 primeiros numeros pares.
    int i, soma = 0;
    for (i = 0; i <= 100; i++) {
        if (i % 2 == 0) {
            soma += i;
        }
    }
    printf("soma dos pares = %d\n", soma);
}