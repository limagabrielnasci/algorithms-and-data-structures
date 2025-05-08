#include <stdio.h>

void func(int *n1, int *n2);

int main() {
    /*
    Fac¸a um programa que leia 2 valores inteiros e chame uma func¸ ˜ao que receba estas
    2 vari ´aveis e troque o seu conte ´udo, ou seja, esta func¸ ˜ao ´e chamada passando duas
    vari ´aveis A e B por exemplo e, ap ´os a execuc¸ ˜ao da func¸ ˜ao, A conter ´a o valor de B e B
    ter ´a o valor de A.
    */
    int n1, n2;
    printf("enter two numbers: "); scanf("%d %d", &n1, &n2);
    printf("antes: %d %d\n", n1, n2);

    func(&n1, &n2);
    printf("depois %d %d\n", n1, n2);
}

void func(int *n1, int *n2) {
    int aux;
    aux = *n1;
    *n1 = *n2;
    *n2 = aux;
}