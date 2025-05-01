#include <stdio.h>
#include <math.h>

int main() {
    /*
     Fac¸a um programa que leia um numero e, caso ele seja positivo, calcule e mostre: ´
    • O numero digitado ao quadrado ´
    • A raiz quadrada do numero digitado 
    */
    int n;
    scanf("%d", &n);
    if (n > 0) {
        double rq = sqrt((double)n);
        int q = n * n;
        printf("%.2f\n", rq);
        printf("%d\n", q);
    } else {
        printf("numero invalido.\n");
    }
}