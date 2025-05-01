#include <stdio.h>

int main() {
    /*
    Ler um conjunto de numeros reais, armazenando-o em vetor e calcular o quadrado das ´
    componentes deste vetor, armazenando o resultado em outro vetor. Os conjuntos temˆ
    10 elementos cada. Imprimir todos os conjuntos.
    */
    float vet[10], res[10];
    for (int i = 0; i < 10; i++) {
        scanf("%f", &vet[i]);
        res[i] = vet[i] * vet[i];
    }
    for (int i = 0; i < 10; i++) {
        printf("%.2f\n", vet[i]);
    }
    for (int i = 0; i < 10; i++) {
        printf("%.2f\n", res[i]);
    }
}