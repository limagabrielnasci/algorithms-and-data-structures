#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char name[30];
    float grade1;
    float grade2;
    float grade3;
} Student;

Student students[5];

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

    float studentAverage;
    int highestGrade1Index = 0;
    int highestAverageIndex = 0;
    int lowestAverageIndex = 0;
    int highestGrade1 = 0;
    float highestAverage = 0;
    float lowestAverage = 10;

    for (int i = 0; i < 5; i++) {
        printf("STUDENT %d:\n", i + 1);
        printf("ID: "); scanf("%d", &students[i].id);

        getchar(); // Consume the '\n' left by scanf

        printf("Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0'; // Remove the '\n' at the end

        printf("Grade 1: "); scanf("%f", &students[i].grade1);
        printf("Grade 2: "); scanf("%f", &students[i].grade2);
        printf("Grade 3: "); scanf("%f", &students[i].grade3);

        // Find the highest grade in the first exam
        if (students[i].grade1 > highestGrade1) {
            highestGrade1 = students[i].grade1;
            highestGrade1Index = i;
        }
        
        // Calculate the overall average
        studentAverage = (students[i].grade1 + students[i].grade2 + students[i].grade3) / 3;

        // Find the highest overall average
        if (studentAverage > highestAverage) {
            highestAverage = studentAverage;
            highestAverageIndex = i;
        }

        // Find the lowest overall average
        if (studentAverage < lowestAverage) {
            lowestAverage = studentAverage;
            lowestAverageIndex = i;
        }

        printf("\n");
    }

    printf("Student with the highest first exam grade: %s\n", students[highestGrade1Index].name);
    printf("Student with the highest overall average: %s\n", students[highestAverageIndex].name);
    printf("Student with the lowest overall average: %s\n", students[lowestAverageIndex].name);

    printf("\n");

    // Check pass or fail
    for (int i = 0; i < 5; i++) {
        studentAverage = (students[i].grade1 + students[i].grade2 + students[i].grade3) / 3;
        if (studentAverage >= 6) {
            printf("Student %s: Passed\n", students[i].name);
        } else {
            printf("Student %s: Failed\n", students[i].name);
        }
    }
}