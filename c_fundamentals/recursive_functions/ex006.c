#include <stdio.h>

int mult(int n1, int n2);

int main() {
    /*
     multiplicac¸ ˜ao de dois n ´umeros inteiros pode ser feita atrav ´es de somas sucessivas.
    Proponha um algoritmo recursivo Multip Rec(n1,n2) que calcule a multiplicac¸ ˜ao de dois
    inteiros.
    */
    int n1, n2;
    printf("enter a number: "); scanf("%d %d", &n1, &n2);
    printf("%d", mult(n1, n2));
}

int mult(int n1, int n2) {
    if (n1 == 0 || n2 == 0) {
        return 0;
    } else if (n1 == 1) {
        return n2;
    } else if (n2 == 1){
        return n1;
    }
    return n1 + mult(n1, n2 - 1);
}