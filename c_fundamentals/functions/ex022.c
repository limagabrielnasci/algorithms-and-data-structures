#include <stdio.h>

void toExclamation(int n);

int main() {
    /*
    Crie uma func¸ao que receba como par ˜ ametro um valor inteiro e gere como sa ˆ ´ıda n linhas
    com pontos de exclamac¸ao, conforme o exemplo abaixo (para n = 5): ˜
    !
    !!
    !!!
    !!!!
    !!!!!
    */
    int n;
    printf("enter a number: "); scanf("%d", &n);
    toExclamation(n);
}

void toExclamation(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            printf("!");
        }
        printf("\n");
    }
}