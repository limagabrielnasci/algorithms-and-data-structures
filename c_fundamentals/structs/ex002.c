#include <stdio.h>
#include <string.h>

typedef struct {
    char name[20];
    int age;
    char address[30];
} Person;

int main() {
    /*
    Implemente um programa que leia o nome, a idade e o enderec¸o de uma pessoa e
    armazene os dados em uma estrutura
    */
    Person person1, person2;

    printf("Name: ");
    fgets(person1.name, sizeof(person1.name), stdin);
    person1.name[strcspn(person1.name, "\n")] = '\0';

    printf("Age: ");
    scanf("%d", &person1.age);

    getchar();
    printf("Address: ");
    fgets(person1.address, sizeof(person1.address), stdin);
    person1.address[strcspn(person1.address, "\n")] = '\0';

    printf("--DATA--\n");
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Address: %s\n", person1.address);
}