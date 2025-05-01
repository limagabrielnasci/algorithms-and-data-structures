#include <stdio.h>
#include <string.h>
#define TAM 2

typedef struct {
    char nome[30];
    int matricula;
    float mediaFinal;
} Aluno;

Aluno alunos[10];
Aluno aprovados[10];
Aluno reprovados[10];
int aprovadosCont = 0, reprovadosCont = 0;

int main() {
    /*
    Fac¸a um programa que leia os dados de 10 alunos (Nome, matricula, Media Final), arma- ´
    zenando em um vetor. Uma vez lidos os dados, divida estes dados em 2 novos vetores,
    o vetor dos aprovados e o vetor dos reprovados, considerando a media m ´ ´ınima para a
    aprovac¸ao como sendo 5.0. Exibir na tela os dados do vetor de aprovados, seguido dos ˜
    dados do vetor de reprovados.
    */
    for (int i = 0; i < TAM; i++) {
        printf("aluno %d\n", i + 1);

        printf("nome: ");
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';

        printf("matricula: "); scanf("%d", &alunos[i].matricula);
        printf("media final: "); scanf("%f", &alunos[i].mediaFinal);
        getchar();

        printf("\n");
    }

    for (int i = 0; i < TAM; i++) {
        if (alunos[i].mediaFinal >= 5) {
            aprovados[aprovadosCont] = alunos[i];
            aprovadosCont++;
        } else {
            reprovados[reprovadosCont] = alunos[i];
            reprovadosCont++;
        }
    }

    printf("ALUNOS APROVADOS:\n");
    
    for (int i = 0; i < aprovadosCont; i++) {
        printf("nome: %s\n", aprovados[i].nome);
        printf("matricula: %d\n", aprovados[i].matricula);
        printf("media final: %.2f\n\n", aprovados[i].mediaFinal);
    }
    
    printf("ALUNOS REPROVADOS:\n");

    for (int i = 0; i < reprovadosCont; i++) {
        printf("nome: %s\n", reprovados[i].nome);
        printf("matricula: %d\n", reprovados[i].matricula);
        printf("media final: %.2f\n\n", reprovados[i].mediaFinal);
    }
}