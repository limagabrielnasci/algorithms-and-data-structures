#include <stdio.h>

int main() {
    /*
    Entre com um nome e imprima o nome somente se a primeira letra do nome for ‘a’
    (maiuscula ou min ´ uscula)
    */
    char nome[20];
    fgets(nome, sizeof(nome), stdin);
    if (nome[0] == 'a') {
        printf("%s\n", nome);
    }
}