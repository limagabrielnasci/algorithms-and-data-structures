#include <stdio.h>

int func(int *a, int *b);

int main() {
    /*
    Elaborar um programa que leia dois valores inteiros (A e B). Em seguida fac¸a uma func¸ ˜ao
    que retorne a soma do dobro dos dois n ´umeros lidos. A func¸ ˜ao dever ´a armazenar o dobro
    de A na pr ´opria vari ´avel A e o dobro de B na pr ´opria vari ´avel B.
    */
    int a, b;
    printf("enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("%d", func(&a, &b));
}

int func(int *a, int *b) {
    *a *= 2;
    *b *= 2;
    return *a + *b;
}