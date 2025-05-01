#include <stdio.h>

int main() {
    // Fac¸a um programa que leia um nome e imprima as 4 primeiras letras do nome
    char nome[20];
    fgets(nome, sizeof(nome), stdin);
    for (int i = 0; i < 4; i++) {
        printf("%c", nome[i]);
    }
}