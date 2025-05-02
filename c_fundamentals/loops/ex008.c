#include <stdio.h>

int main() {
    /*
    Escreva um programa que leia 10 numeros e escreva o menor valor lido e o maior valor ´
    lido
    */
    int n, g = 0, s = 99999999;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &n);
        if (n > g) {
            g = n;
        }
        if (n < s) {
            s = n;
        }
    }
    printf("greatest = %d\nsmallest = %d\n", g, s);
}