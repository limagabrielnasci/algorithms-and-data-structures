#include <stdio.h>

int main() {
    /*
    Leia uma temperatura em graus Celsius e apresente-a convertida em graus Kelvin. A
    formula de convers ´ ao˜ e:´ K = C + 273.15, sendo C a temperatura em Celsius e K a
    temperatura em Kelvin.
    */
    float c;
    scanf("%f", &c);
    float k = c + 273.15;
    printf("%.2fºK\n", k);
}