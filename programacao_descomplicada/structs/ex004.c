#include <stdio.h>
#include <string.h>

typedef struct {
    int matricula;
    char nome[30];
    float n1;
    float n2;
    float n3;
} Alunos;

Alunos aluno[5];

int main() {
    /*
    Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve
    conter a matr´ıcula do aluno, nome, nota da primeira prova, nota da segunda prova e nota
    da terceira prova.
    (a) Permita ao usuario entrar com os dados de 5 alunos. ´
    (b) Encontre o aluno com maior nota da primeira prova.
    (c) Encontre o aluno com maior media geral. ´
    (d) Encontre o aluno com menor media geral ´
    (e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para
    aprovac¸ao. 
    */

    float mediaAluno, soma = 0;
    int indiceMaiorN1 = 0;
    int indiceMaiorMedia = 0;
    int indiceMenorMedia = 0;
    int maiorPrimeiraNota = 0;
    int maiorMedia = 0;
    int menorMedia = 10;

    for (int i = 0; i < 2; i++) {
        printf("ALUNO %d:\n", i + 1);
        printf("matricula: "); scanf("%d", &aluno[i].matricula);

        getchar();

        printf("nome: ");
        fgets(aluno[i].nome, sizeof(aluno[i].nome), stdin);
        aluno[i].nome[strcspn(aluno[i].nome, "\n")] = '\0';

        printf("nota 1: "); scanf("%f", &aluno[i].n1);
        printf("nota 2: "); scanf("%f", &aluno[i].n2);
        printf("nota 3: "); scanf("%f", &aluno[i].n3);

        if (aluno[i].n1 > maiorPrimeiraNota) {
            maiorPrimeiraNota = aluno[i].n1;
            indiceMaiorN1 = i;
        }
        
        mediaAluno = (aluno[i].n1 + aluno[i].n2 + aluno[i].n3) / 3;

        if (mediaAluno > maiorMedia) {
            maiorMedia = mediaAluno;
            indiceMaiorMedia = i;
        }

        if (mediaAluno < menorMedia) {
            menorMedia = mediaAluno;
            indiceMenorMedia = i;
        }

        printf("\n");
    }

    printf("aluno com a maior nota da primeira prova : %s\n", aluno[indiceMaiorN1].nome);
    printf("aluno com maior media geral: %s\n", aluno[indiceMaiorMedia].nome);
    printf("aluno com menor media geral: %s\n", aluno[indiceMenorMedia].nome);

    printf("\n");

    for (int i = 0; i < 2; i++) {
        mediaAluno = (aluno[i].n1 + aluno[i].n2 + aluno[i].n3) / 3;
        if (mediaAluno >= 6) {
            printf("aluno %s: aprovado\n", aluno[i].nome);
        } else {
            printf("aluno %s: reprovado\n", aluno[i].nome);
        }
    }
}