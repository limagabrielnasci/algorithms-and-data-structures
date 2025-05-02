#include <stdio.h>
#include <string.h>

typedef struct {
    int registration;
    char name[20];
    int subjectCode;
    float grade1, grade2;
} Students;

Students student[10];

int main() {
    /*
    Fac¸a um programa que realize a leitura dos seguintes dados relativos a um conjunto de
    alunos: Matricula, Nome, Codigo da Disciplina, Nota1 e Nota2. Considere uma turma de ´
    ate 10 alunos. Ap ´ os ler todos os dados digitados, e depois de armazen ´ a-los em um vetor ´
    de estrutura, exibir na tela a listagem final dos alunos com as suas respectivas medias ´
    finais (use uma media ponderada: Nota1 com peso=1.0 e Nota2 com peso=2.0).
    */
    int numStudents;
    float average;

    printf("Enter the number of students to add (1-10): "); 
    scanf("%d", &numStudents);
    while (numStudents < 1 || numStudents > 10) {
        printf("Please enter a valid number!\n");
        printf("Enter the number of students to add (1-10): "); 
        scanf("%d", &numStudents);
    }

    for (int i = 0; i < numStudents; i++) {
        printf("Student %d\n", i + 1);

        printf("Registration: "); 
        scanf("%d", &student[i].registration);

        getchar();
        printf("Name: ");
        fgets(student[i].name, sizeof(student[i].name), stdin);
        student[i].name[strcspn(student[i].name, "\n")] = '\0';

        printf("Subject Code: "); 
        scanf("%d", &student[i].subjectCode);

        printf("Grade 1: "); 
        scanf("%f", &student[i].grade1);
        printf("Grade 2: "); 
        scanf("%f", &student[i].grade2);
        printf("\n");
    }

    printf("----- STUDENT LIST -----\n");
    
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d data:\n", i + 1);
        printf("Registration: %d\n", student[i].registration);
        printf("Name: %s\n", student[i].name);
        printf("Subject Code: %d\n", student[i].subjectCode);
        
        average = (student[i].grade1 * 1 + student[i].grade2 * 2) / 3;
        printf("Student's average: %.2f\n", average);

        printf("\n");
    }
}