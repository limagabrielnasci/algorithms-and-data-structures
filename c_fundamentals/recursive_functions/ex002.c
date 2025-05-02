#include <stdio.h>

int fact(int num);

int main() {
    // Fac¸a uma func¸ao recursiva que calcule e retorne o fatorial de um n ˜ umero inteiro N.
    int num;
    printf("enter a number: "); scanf("%d", &num);
    printf("%d\n", fact(num));
}

int fact(int num) {
    if (num == 0)
        return 1;
    else
        return num * fact(num - 1);
    // exemplo pra 3
    // fact(3) = 3 * fact(2)
    //         = 3 * (2 * fact(1))
    //         = 3 * (2 * (1 * fact(0)))
    //         = 3 * (2 * (1 * 1))
    //         = 6
}