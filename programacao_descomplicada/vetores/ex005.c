#include <stdio.h>

int main() {
    // Leia um vetor de 10 posic¸oes. Contar e escrever quantos valores pares ele possui.
    int vet[10], pares = 0;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vet[i]);
        if (vet[i] % 2 == 0) {
            pares++;
        }
    }
    printf("valores pares = %d\n", pares);
}