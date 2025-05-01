#include <stdio.h>

int main() {
    // Digite um nome, calcule e retorne quantas letras tem esse nome
    char nome[50];
    int tam = 0;
    fgets(nome, sizeof(nome), stdin);
    for (int i = 0; nome[i] != '\0'; i++) {
        tam++;
    }
    printf("tamanho da string = %d\n", tam - 1);
}