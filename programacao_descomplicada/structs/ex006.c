#include <stdio.h>
#include <string.h>

typedef struct {
    int matricula;
    char nome[20];
    int codigoDisciplina;
    float nota1, nota2;
} Alunos;

Alunos aluno[10];

int main() {
    /*
    Fac¸a um programa que realize a leitura dos seguintes dados relativos a um conjunto de
    alunos: Matricula, Nome, Codigo da Disciplina, Nota1 e Nota2. Considere uma turma de ´
    ate 10 alunos. Ap ´ os ler todos os dados digitados, e depois de armazen ´ a-los em um vetor ´
    de estrutura, exibir na tela a listagem final dos alunos com as suas respectivas medias ´
    finais (use uma media ponderada: Nota1 com peso=1.0 e Nota2 com peso=2.0).
    */
    int numAlunos;
    float media;

    printf("quantidade de alunos que deseja adicionar (1-10): "); scanf("%d", &numAlunos);
    while (numAlunos < 1 || numAlunos > 10) {
        printf("digite um numero valido!\n");
        printf("quantidade de alunos que deseja adicionar (1-10): "); scanf("%d", &numAlunos);
    }

    for (int i = 0; i < numAlunos; i++) {
        printf("aluno %d\n", i + 1);

        printf("matricula: "); scanf("%d", &aluno[i].matricula);

        getchar();
        printf("nome: ");
        fgets(aluno[i].nome, sizeof(aluno[i].nome), stdin);
        aluno[i].nome[strcspn(aluno[i].nome, "\n")] = '\0';

        printf("codigo da disciplina: "); scanf("%d", &aluno[i].codigoDisciplina);

        printf("nota 1: "); scanf("%f", &aluno[i].nota1);
        printf("nota 2: "); scanf("%f", &aluno[i].nota2);
        printf("\n");

    }

    printf("----- LISTAGEM DOS ALUNOS -----\n");
    
    for (int i = 0; i < numAlunos; i++) {
        printf("dados do aluno %d:\n", i + 1);
        printf("matricula: %d\n", aluno[i].matricula);
        printf("nome: %s\n", aluno[i].nome);
        printf("codigo da disciplina: %d\n", aluno[i].codigoDisciplina);
        
        media = (aluno[i].nota1 * 1 + aluno[i].nota2 * 2) / 3;
        printf("media do aluno: %.2f\n", media);

        printf("\n");
    }

}