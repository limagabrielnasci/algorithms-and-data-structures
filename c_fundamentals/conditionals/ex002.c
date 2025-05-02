#include <stdio.h>
#include <math.h>

int main() {
    /*
    Leia um numero fornecido pelo usu ´ ario. Se esse n ´ umero for positivo, calcule a raiz ´
    quadrada do numero. Se o n ´ umero for negativo, mostre uma mensagem dizendo que o ´
    numero ´ e inv ´ alido. 
    */
    int n;
    scanf("%d", &n);
    if (n > 0) {
        double r = sqrt((double)n);
        printf("%.2f\n", r);
    } else {
        printf("invalid.\n");
    }
}