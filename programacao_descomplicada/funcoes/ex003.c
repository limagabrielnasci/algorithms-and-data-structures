#include <stdio.h>

int posNeg(int num);

int main() {
    /*
    Fac¸a uma func¸ao para verificar se um n ˜ umero ´ e positivo ou negativo. Sendo que o valor ´
    de retorno sera 1 se positivo, -1 se negativo e 0 se for igual a 0.
    */
    int num;
    printf("enter a number: "); scanf("%d", &num);
    printf("positive/negative: %d\n", posNeg(num));
}

int posNeg(int num) {
    if (num > 0) return 1;
    else if (num < 0) return -1;
    return 0;
}