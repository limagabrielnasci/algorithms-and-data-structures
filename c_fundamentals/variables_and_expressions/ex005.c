#include <stdio.h>

int main() {
    //Leia um numero real e imprima a quinta parte deste n ´ umero.
    float n;
    scanf("%f", &n);
    float oneF = n / 5;
    printf("%.2f = %.2f\n", n, oneF);
}