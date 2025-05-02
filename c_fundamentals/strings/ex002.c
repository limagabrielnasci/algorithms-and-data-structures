#include <stdio.h>

int main() {
    // Crie um programa que calcula o comprimento de uma string (nao use a func¸ ˜ ao strlen).
    char string[20];
    scanf("%[^\n]", string);
    int len = 0;
    for (int i = 0; string[i] != '\0'; i++) {
        len++;
    }
    printf("lenght = %d\n", len); 
}