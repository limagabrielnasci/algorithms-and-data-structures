#include <stdio.h>

int main() {
    /*
    Fac¸a um programa que receba uma palavra e calcule quantas vogais (a, e, i, o, u) possui
    essa palavra. Entre com um caractere (vogal ou consoante) e substitua todas as vogais
    da palavra dada por esse caractere.
    */
    char str[20], c;
    int i, v = 0;
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            v++;
        }
    }

    printf("entre com um caracter pra substituir as vogais: "); scanf(" %c", &c);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            str[i] = c;
        }
    }

    printf("quantidade de vogais = %d\n", v);
    printf("string apos a mudanca = %s\n", str);
}