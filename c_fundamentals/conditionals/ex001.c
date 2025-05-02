#include <stdio.h>

int main() {
    // Fac¸a um programa que receba dois numeros e mostre qual deles ´ e o maior.
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    if (n1 > n2) {
        printf("%d greater than\n", n1);
    } else if (n1 == n2) {
        printf("equals\n");
    } else {
        printf("%d less than\n", n2);
    }
}