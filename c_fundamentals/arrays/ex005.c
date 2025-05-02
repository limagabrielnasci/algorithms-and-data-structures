#include <stdio.h>

int main() {
    // Leia um vetor de 10 posic¸oes. Contar e escrever quantos valores pares ele possui.
    int arr[10], e = 0;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            e++;
        }
    }
    printf("even values = %d\n", e);
}