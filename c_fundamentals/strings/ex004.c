#include <stdio.h>

int main() {
    // Fac¸a um programa que leia um nome e imprima as 4 primeiras letras do nome
    char name[20];
    fgets(name, sizeof(name), stdin);
    for (int i = 0; i < 4; i++) {
        printf("%c", name[i]);
    }
}