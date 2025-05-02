#include <stdio.h>

int main() {
    // Digite um nome, calcule e retorne quantas letras tem esse nome
    char name[50];
    int len = 0;
    fgets(name, sizeof(name), stdin);
    for (int i = 0; name[i] != '\0'; i++) {
        len++;
    }
    printf("length = %d\n", len - 1);
}