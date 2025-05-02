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

    printf("Enter a character to replace the vowels: "); scanf(" %c", &c);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            str[i] = c;
        }
    }

    printf("Number of vowels = %d\n", v);
    printf("String after the change = %s\n", str);
}