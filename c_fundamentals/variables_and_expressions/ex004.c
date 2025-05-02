#include <stdio.h>

int main() {
    // Leia um numero real e imprima o resultado do quadrado desse n ´ umero.
    float n;
    scanf("%f", &n);
    float sq = n * n;
    printf("the square of %.2f = %.2f\n", n, sq);
}