#include <stdio.h>
#include <math.h>

int main() {
    /*
    Leia um numero real. Se o numero for positivo imprima a raiz quadrada. Do contr ´ ario, ´
    imprima o numero ao quadrado.
    */
    float n;
    scanf("%f", &n);
    if (n > 0) {
        double rq = sqrt((double)n);
        printf("%.2f\n", rq);
    } else {
        printf("%.2f", n*n);
    }
}