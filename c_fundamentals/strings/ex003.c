#include <stdio.h>

int main() {
    /*
    Entre com um nome e imprima o nome somente se a primeira letra do nome for ‘a’
    (maiuscula ou min ´ uscula)
    */
    char name[20];
    fgets(name, sizeof(name), stdin);
    if (name[0] == 'a') {
        printf("%s\n", name);
    }
}