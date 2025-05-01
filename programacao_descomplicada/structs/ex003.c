#include <stdio.h>
#include <string.h>

typedef struct {
    int matricula;
    char curso[50];
} Alunos;

Alunos aluno[5];

int main() {
    /*
    Construa uma estrutura aluno com nome, numero de matr ´ ´ıcula e curso. Leia do usuario ´
    a informac¸ao de 5 alunos, armazene em vetor dessa estrutura e imprima os dados na ˜
    tela
    */
    for (int i = 0; i < 5; i++) {
        printf("dados do aluno %d\n\n", i + 1);
        printf("matricula: "); scanf("%d", &aluno[i].matricula);
        getchar();
        printf("curso: ");
        fgets(aluno[i].curso, sizeof(aluno[i].curso), stdin);
        aluno[i].curso[strcspn(aluno[i].curso, "\n")] = '\0';
        printf("\n");
    }

    for (int i = 0; i < 5; i++) {
        printf("aluno %d\n\n", i + 1);
        printf("matricula do aluno %d: %d\n", i + 1, aluno[i].matricula);
        printf("curso: %s\n", aluno[i].curso);
    }
}