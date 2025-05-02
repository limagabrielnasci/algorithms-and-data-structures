#include <stdio.h>

int main() {
    /*
    Fac¸a um programa que leia um numero inteiro ´ N e depois imprima os N primeiros
    numeros naturais ´ ´ımpares
    */
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        if (i % 2 == 1) {
            printf("%d\n", i);
        }
    }
}