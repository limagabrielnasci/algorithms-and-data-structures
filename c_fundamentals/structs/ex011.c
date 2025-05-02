#include <stdio.h>
#include <string.h>
#define SIZE 10

typedef struct {
    char name[30];
    int enrollment;
    float finalGrade;
} Student;

Student students[10];
Student passed[10];
Student failed[10];
int passedCount = 0, failedCount = 0;

int main() {
    /*
    Fac¸a um programa que leia os dados de 10 alunos (Nome, matricula, Media Final), arma- ´
    zenando em um vetor. Uma vez lidos os dados, divida estes dados em 2 novos vetores,
    o vetor dos aprovados e o vetor dos reprovados, considerando a media m ´ ´ınima para a
    aprovac¸ao como sendo 5.0. Exibir na tela os dados do vetor de aprovados, seguido dos ˜
    dados do vetor de reprovados.
    */
    for (int i = 0; i < SIZE; i++) {
        printf("Student %d\n", i + 1);

        printf("Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0';

        printf("Enrollment: "); scanf("%d", &students[i].enrollment);
        printf("Final grade: "); scanf("%f", &students[i].finalGrade);
        getchar();

        printf("\n");
    }

    for (int i = 0; i < SIZE; i++) {
        if (students[i].finalGrade >= 5) {
            passed[passedCount] = students[i];
            passedCount++;
        } else {
            failed[failedCount] = students[i];
            failedCount++;
        }
    }

    printf("PASSED STUDENTS:\n");

    for (int i = 0; i < passedCount; i++) {
        printf("Name: %s\n", passed[i].name);
        printf("Enrollment: %d\n", passed[i].enrollment);
        printf("Final grade: %.2f\n\n", passed[i].finalGrade);
    }

    printf("FAILED STUDENTS:\n");

    for (int i = 0; i < failedCount; i++) {
        printf("Name: %s\n", failed[i].name);
        printf("Enrollment: %d\n", failed[i].enrollment);
        printf("Final grade: %.2f\n\n", failed[i].finalGrade);
    }
}