#include <stdio.h>

int summation(int num);

int main() {
    /*
    Crie uma func¸ao recursiva que receba um n ˜ umero inteiro positivo N e calcule o somat ´ orio ´
    dos numeros de 1 a N.
    */
    int n;
    printf("enter a number: "); scanf("%d", &n);
    printf("%d\n", summation(n));
}

int summation(int num) {
    int result;
    if (num == 0)
        result = 0;
    else 
        result = num + summation(num - 1);
    return result;
}