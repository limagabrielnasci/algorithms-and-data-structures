#include <stdio.h>
#include <string.h>

int main() {
    /*
    Ler nome, sexo e idade. Se sexo for feminino e idade menor que 25, imprime o nome da
    pessoa e a palavra “ACEITA”, caso contrario imprimir “N ´ AO ACEITA”
    */
    char nome[20], sexo;
    int idade;

    printf("nome: "); fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';

    printf("sexo: "); scanf(" %c", &sexo);
    while (sexo != 'f' && sexo != 'm') {
        getchar();
        printf("digite um sexo valido\n");
        printf("sexo: "); scanf("%c", &sexo);
    }

    printf("idade: " ); scanf("%d", &idade);

    if (sexo == 'f' && idade < 25) {
        printf("nome: %s\naceita\n", nome);
    } else {
        printf("nao aceita\n");
    }

}