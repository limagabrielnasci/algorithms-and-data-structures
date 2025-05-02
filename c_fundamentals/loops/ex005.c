#include <stdio.h>

int main() {
    // Fac¸a um programa que pec¸a ao usuario para digitar 10 valores e some-os.
    int v, sum = 0;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &v);
        sum += v;
    }
    printf("sum = %d\n", sum);
}