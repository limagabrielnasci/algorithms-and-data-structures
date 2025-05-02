#include <stdio.h>

int main() {
    /*
    Fac¸a um programa que leia 10 inteiros positivos, ignorando nao positivos, e imprima sua ˜
    media. 
    */
    float sum = 0, avg;
    int i = 0, v;
    do {
        scanf("%d", &v);
        while (v <= 0) {
            printf("invalid number, try again\n");
            scanf("%d", &v);
        }
        if (v > 0) {
            sum += v;
        }
        i++;
    } while (i < 10);
    avg = sum / 10.0;
    printf("average = %f\n", avg);
}