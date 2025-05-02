#include <stdio.h>
#include <math.h>

void checkPerfectSquare(int num);

int main() {
    /*
    Fac¸a uma func¸ao para verificar se um n ˜ umero ´ e um quadrado perfeito. Um quadrado ´
    perfeito e um n ´ umero inteiro n ´ ao negativo que pode ser expresso como o quadrado de ˜
    outro numero inteiro. Ex: 1, 4, 9...
    */
    int num;
    printf("enter a number: "); scanf("%d", &num);
    checkPerfectSquare(num);
}

void checkPerfectSquare(int num) {
    if (num < 0) printf("%d is not a square perfect\n", num);
    int sq = (int)sqrt(num);
    if (sq * sq == num) printf("%d is a perfect square\n", num);
    else printf("%d is not a perfect square\n", num);
}