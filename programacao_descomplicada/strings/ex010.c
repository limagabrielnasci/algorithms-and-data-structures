#include <stdio.h>

int main() {
    // Fac¸a um programa que receba uma palavra e a imprima de tras-para-frente.
    char str[20], str2[20];
    scanf("%s", str);

    int len_str = 0;
    while (str[len_str] != '\0') len_str++;

    for (int i = 0; i < len_str; i++) {
        // - 1 pra nao contar o \0
        str2[i] = str[len_str - i - 1];
    }
    
    printf("%s\n", str2);
}