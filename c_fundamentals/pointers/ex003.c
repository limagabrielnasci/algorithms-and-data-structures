#include <stdio.h>

int main() {
    /*
    Escreva um programa que contenha duas vari ´aveis inteiras. Leia essas vari ´aveis do
    teclado. Em seguida, compare seus enderec¸os e exiba o conte ´udo do maior enderec¸o
    */
    int n1, n2;

    printf("enter two numbers: "); scanf("%d %d", &n1, &n2);

    if (&n1 > &n2) {
        printf("conteudo de n1 = %d\n", n1);
    } else {
        printf("conteudo de n2 = %d\n", n2);
    }
}