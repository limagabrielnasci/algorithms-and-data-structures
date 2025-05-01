#include <stdio.h>

int main() {
    /*
    Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit.
    A formula de convers ´ ao˜ e: ´ F = C∗(9.0/5.0)+32.0, sendo F a temperatura em Fahrenheit
    e C a temperatura em Celsius.
    */
    float c;
    scanf("%f", &c);
    float f = c * (9.0 / 5.0) + 32.0;
    printf("conversao de %.2fº pra fahrenheit = %.2fºF\n", c, f);
}