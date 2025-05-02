#include <stdio.h>
#define PI 3.14

float volume(float r);

int main() {
    /*
    Fac¸a uma func¸ao e um programa de teste para o c ˜ alculo do volume de uma esfera. ´
    Sendo que o raio e passado por par ´ ametro. ˆ
    V = 4/3 ∗ π ∗ R3
    */
    float radius;
    printf("enter a radius: "); scanf("%f", &radius);
    printf("%.2f\n", volume(radius));
}

float volume(float r) {
    return (4.0 / 3.0) * PI * r * r * r;
}