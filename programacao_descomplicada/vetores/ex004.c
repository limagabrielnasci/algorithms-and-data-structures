#include <stdio.h>

int main() {
    /*
    Fac¸a um programa que leia um vetor de 8 posic¸oes e, em seguida, leia tamb ˜ em dois va- ´
    lores X e Y quaisquer correspondentes a duas posic¸oes no vetor. Ao final seu programa ˜
    devera escrever a soma dos valores encontrados nas respectivas posic¸ ´ oes ˜ X e Y .
    */
    int vet[8], soma = 0, x, y;;
    for (int i = 0; i < 8; i++) {
        scanf("%d", &vet[i]);
    }
    printf("posicoes:\n");
    scanf("%d %d", &x, &y);
    soma = vet[x] + vet[y];
    printf("soma = %d\n", soma);
}