#include <stdio.h>

int main() {
    /*
    Fac¸a um programa que receba do usuario uma string. O programa imprime a string sem ´
    suas vogais.
    */
    char str[20];
    scanf("%s", str);
    int i, j = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u') {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
    printf("%s", str);
}