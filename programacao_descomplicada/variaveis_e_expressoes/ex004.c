#include <stdio.h>

int main() {
    // Leia um numero real e imprima o resultado do quadrado desse n ´ umero.
    float n;
    scanf("%f", &n);
    float quadradoDeN = n * n;
    printf("quadrado de %.2f = %.2f\n", n, quadradoDeN);
}