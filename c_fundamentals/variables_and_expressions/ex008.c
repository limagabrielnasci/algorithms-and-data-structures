#include <stdio.h>

int main() {
    /*
    Leia uma temperatura em graus Kelvin e apresente-a convertida em graus Celsius. A
    formula de convers ´ ao˜ e:´ C = K − 273.15, sendo C a temperatura em Celsius e K a
    temperatura em Kelvin.
    */
    float k;
    scanf("%f", &k);
    float c = k - 273.15;
    printf("%.2fº\n", c);
}