#include <stdio.h>

int main() {
    // Fac¸a um programa que receba dois numeros e mostre qual deles ´ e o maior.
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    if (n1 > n2) {
        printf("%d eh maior\n", n1);
    } else if (n1 == n2) {
        printf("iguais\n");
    } else {
        printf("%d eh maior\n", n2);
    }
}