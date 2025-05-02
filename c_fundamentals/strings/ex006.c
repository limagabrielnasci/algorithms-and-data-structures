#include <stdio.h>
#include <string.h>

int main() {
    /*
    Ler nome, sexo e idade. Se sexo for feminino e idade menor que 25, imprime o nome da
    pessoa e a palavra “ACEITA”, caso contrario imprimir “N ´ AO ACEITA”
    */
    char name[20], gender;
    int age;

    printf("Name: "); fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    printf("Gender: "); scanf(" %c", &gender);
    while (gender != 'f' && gender != 'm') {
        getchar();
        printf("Please enter a valid gender\n");
        printf("Gender: "); scanf("%c", &gender);
    }

    printf("Age: "); scanf("%d", &age);

    if (gender == 'f' && age < 25) {
        printf("Name: %s\nACCEPTED\n", name);
    } else {
        printf("NOT ACCEPTED\n");
    }
}