#include <stdio.h>

int main() {
    //Leia um numero real e imprima a quinta parte deste n ´ umero.
    float n;
    scanf("%f", &n);
    float quintaP = n / 5;
    printf("quinta de parte de %.2f = %.2f\n", n, quintaP);
}