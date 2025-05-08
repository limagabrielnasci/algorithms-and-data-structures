#include <stdio.h>

int numbers(int n);

int main() {
    /*
    Fac¸a uma func¸ ˜ao recursiva que receba um n ´umero inteiro positivo N e imprima todos os
    n ´umeros naturais de 0 at ´e N em ordem crescente.
    */
    int n;
    printf("enter a number: "); scanf("%d", &n);
    for (int i = 0; i <= n; i++) {
        printf("%d ", numbers(i));
    }
}

int numbers(int n) {
    if (n > 0) {
        return n;
    }
    return n - (n);
}