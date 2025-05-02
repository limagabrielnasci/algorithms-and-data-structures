#include <stdio.h>

void triangle(int n);

int main() {
    /*
    Escreva uma func¸ao que gera um tri ˜ angulo de altura e lados n e base 2*n-1.
    */
    int n;
    printf("enter a number: "); scanf("%d", &n);
    triangle(n);
}

void triangle(int n) {
    for (int i = 1; i <= n; i++) { 
        int spaces = n - i;
        int a = 2 * i - 1;
        for (int j = 0; j < spaces; j++) {
            printf(" ");
        }
        for (int j = 0; j < a; j++) {
            printf("*");
        }
        printf("\n");
    }
}