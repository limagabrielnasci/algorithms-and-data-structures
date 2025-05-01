#include <stdio.h>
#include <string.h>

int main() {
    /*
    Escreva um programa que substitui as ocorrencias de um caractere ‘0’ em uma string por ˆ
    outro caractere ‘1’.
    */
    char s1[20];

    fgets(s1, sizeof(s1), stdin);
    s1[strcspn(s1, "\n")] = '\0';

    for (int i = 0; s1[i] != '\0'; i++) {
        if (s1[i] == '0') {
            s1[i] = '1';
        }
    }

    printf("\n%s\n", s1);
}