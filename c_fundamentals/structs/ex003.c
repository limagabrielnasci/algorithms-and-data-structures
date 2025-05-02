#include <stdio.h>
#include <string.h>

typedef struct {
    int registration_number;
    char course[50];
} Student;

Student students[5];

int main() {
    /*
    Construa uma estrutura aluno com nome, número de matrícula e curso. Leia do usuário 
    a informação de 5 alunos, armazene em vetor dessa estrutura e imprima os dados na tela.
    */
    for (int i = 0; i < 5; i++) {
        printf("Enter details for student %d\n\n", i + 1);
        printf("Registration number: "); scanf("%d", &students[i].registration_number);
        getchar();
        printf("Course: ");
        fgets(students[i].course, sizeof(students[i].course), stdin);
        students[i].course[strcspn(students[i].course, "\n")] = '\0';
        printf("\n");
    }

    for (int i = 0; i < 5; i++) {
        printf("Student %d details\n\n", i + 1);
        printf("Student %d registration number: %d\n", i + 1, students[i].registration_number);
        printf("Course: %s\n", students[i].course);
    }
}
