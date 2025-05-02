#include <stdio.h>

int main() {
    /*
    Fac¸a um programa que leia 10 inteiros positivos, ignorando nao positivos, e imprima sua ˜
    media.
    */
    float p, sum = 0, avg;
    for (int i = 0; i < 10; i++) {
        scanf("%f", &p);
        sum += p;
    }
    avg = sum / 10;
    printf("average = %.2f\n", avg);
}