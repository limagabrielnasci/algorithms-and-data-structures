#include <stdio.h>

int main() {
    /*
    Leia uma temperatura em graus Fahrenheit e apresente-a convertida em graus Celsius.
    A formula de convers ´ ao˜ e: ´ C = 5.0 ∗ (F − 32.0)/9.0, sendo C a temperatura em Celsius
    e F a temperatura em Fahrenheit.
    */
    float f;
    scanf("%f", &f);
    float c = 5.0 * (f - 32.0) / 9.0;
    printf("%.2fº\n", c);
}