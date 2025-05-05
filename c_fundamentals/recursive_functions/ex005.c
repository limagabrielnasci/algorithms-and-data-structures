#include <stdio.h>

int fib(int n);

int main() {
    /*
    Fac¸a uma func¸ ˜ao recursiva que calcule e retorne o N- ´esimo termo da sequ ˆencia Fibo-
    nacci. Alguns n ´umeros desta sequ ˆencia s ˜ao: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89...
    */
    int n;
    printf("enter a number: "); scanf("%d", &n);
    for (int i = 0; i <= n; i++) {
        printf("%d ", fib(i));
    }
}

int fib(int n) {
    if (n <= 1) {
        return n;
    } 
    return fib(n - 1) + fib(n - 2);
    /*
    fib(3 - 1) + fib(3 - 2) = fib(2) + fib(1)
    fib(2 - 1) + fib(1 - 1) = fib(1) + fib(0)
    fib(1) = 1
    fib(0) = 0

    então:
    fib(2) = 1 + 0 = 1
    fib(1) = 1

    fib(3) = fib(2) + fib(1) = 2
    */
}