#include <stdio.h>

void swap(int a, int b);

int main() {
    /*
    Fac¸a uma func¸ao ‘Troque’, que recebe duas vari ˜ aveis reais A e B e troca o valor delas ´
    (i.e., A recebe o valor de B e B recebe o valor de A).
    */
    int a, b;
    printf("enter a number: "); scanf("%d %d", &a, &b);
    swap(a, b);
}

void swap(int a, int b) {
    int aux = a;
    a = b;
    b = aux;
    printf("%d %d\n", a, b);
}