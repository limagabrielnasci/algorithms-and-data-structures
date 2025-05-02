#include <stdio.h>

int doubleNumber(int num);

int main() {
    // Crie uma func¸ao que recebe como par ˜ ametro um n ˆ umero inteiro e devolve o seu dobro
    int num;
    printf("enter a number: "); scanf("%d", &num);
    printf("double: %d\n", doubleNumber(num));
}

int doubleNumber(int num) {
    return num * 2;
}