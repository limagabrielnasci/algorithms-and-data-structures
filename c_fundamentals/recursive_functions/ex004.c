#include <stdio.h>

int myPow(int k, int n);

int main() {
    // Crie uma func¸ ˜ao recursiva que receba dois inteiros positivos k e n e calcule kn
    int k, n;
    printf("enter a number: "); scanf("%d %d", &k, &n);
    printf("%d\n", myPow(k, n));
}

int myPow(int k, int n) {
    if (n == 0) return 1;
    else return k * myPow(k, n - 1);
}