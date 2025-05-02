#include <stdio.h>

float toFahrenheit(float c);

int main() {
    /*
    Fac¸a uma func¸ao que receba uma temperatura em graus Celsius e retorne-a convertida ˜
    em graus Fahrenheit. A formula de convers ´ ao˜ e:´ F = C ∗ (9.0/5.0) + 32.0, sendo F a
    temperatura em Fahrenheit e C a temperatura em Celsius.
    */
    float c;
    printf("enter a temperature: "); scanf("%f", &c);
    printf("%.2fºF\n", toFahrenheit(c));
}

float toFahrenheit(float c) {
    return c * (9.0 / 5.0) + 32.0;
}