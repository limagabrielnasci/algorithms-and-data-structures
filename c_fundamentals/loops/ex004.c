#include <stdio.h>

int main() {
    /*
    Escreva um programa que declare um inteiro, inicialize-o com 0, e incremente-o de 1000
    em 1000, imprimindo seu valor na tela, ate que seu valor seja 100000 (cem mil).
    */
    for (int i = 0; i <= 100000; i+= 1000) {
        printf("%d\n", i);
    }
}