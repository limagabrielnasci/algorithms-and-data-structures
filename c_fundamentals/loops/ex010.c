#include <stdio.h>

int main() {
    // Fac¸a um programa que calcule e mostre a soma dos 50 primeiros numeros pares.
    int i, sum = 0;
    for (i = 0; i <= 100; i++) {
        if (i % 2 == 0) {
            sum += i;
        }
    }
    printf("sum = %d\n", sum);
}