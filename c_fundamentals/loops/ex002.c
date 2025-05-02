#include <stdio.h>

int main() {
    /*
    Escreva um programa que escreva na tela, de 1 ate 100, de 1 em 1, 3 vezes. A primeira ´
    vez deve usar a estrutura de repetic¸ao˜ for, a segunda while, e a terceira do while.
    */
    int i = 1;
    /*
    for (i = 1; i < 101; i++) {
        printf("%d ", i);
    }
    
    /*while (i < 101) {
        printf("%d ", i);
        i++;
    }
    */

    do {
        printf("%d ", i);
        i++;
    } while (i < 101);
}