#include <stdio.h>

void func(int *n1, int *n2);

int main() {
    /*
    Fac¸a um programa que leia dois valores inteiros e chame uma func¸ ˜ao que receba estes
    2 valores de entrada e retorne o maior valor na primeira vari ´avel e o menor valor na
    segunda vari ´avel. Escreva o conte ´udo das 2 vari ´aveis na tela.
    */
    int n1, n2;
    printf("enter two numbers: "); scanf("%d %d", &n1, &n2);
    func(&n1, &n2);
    printf("%d %d", n1, n2);
}

void func(int *n1, int *n2) {
    if (*n1 < *n2) {
        int tmp = *n1;
        *n1 = *n2;
        *n2 = tmp;
    }
}