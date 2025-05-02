#include <stdio.h>

int main() {
    /*
    Fac¸a um programa que receba um numero inteiro e verifique se este n ´ umero ´ e par ou ´
    ´ımpar.
    */
    int n; 
    scanf("%d", &n);
    if (n % 2 == 0) {
        printf("even");
    } else {
        printf("odd");
    }
}