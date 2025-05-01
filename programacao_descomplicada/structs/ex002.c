#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[20];
    int idade;
    char endereco[30];
} Pessoa;

int main() {
    /*
    Implemente um programa que leia o nome, a idade e o enderec¸o de uma pessoa e
    armazene os dados em uma estrutura
    */
    Pessoa pessoa1, pessoa2;

    printf("nome: ");
    fgets(pessoa1.nome, sizeof(pessoa1.nome), stdin);
    pessoa1.nome[strcspn(pessoa1.nome, "\n")] = '\0';

    printf("idade: ");
    scanf("%d", &pessoa1.idade);

    getchar();
    printf("endereco: ");
    fgets(pessoa1.endereco, sizeof(pessoa1.endereco), stdin);
    pessoa1.endereco[strcspn(pessoa1.endereco, "\n")] = '\0';

    printf("--DADOS--\n");
    printf("nome: %s\n", pessoa1.nome);
    printf("idade: %d\n", pessoa1.idade);
    printf("endereco: %s\n", pessoa1.endereco);
}