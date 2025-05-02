#include <stdio.h>

int cube(int num);

int main() {
    /*
    Escreva uma func¸ao recursiva que calcule a soma dos primeiros n cubos:
    S(n) = 1³ + 2³ + ... + n³
    */
    int num;
    printf("enter a number: "); scanf("%d", &num);
    printf("%d\n", cube(num));
}

int cube(int num) {
    if (num == 0)
        return 0;
    else
        return num * num * num + cube(num - 1);
}