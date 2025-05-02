#include <stdio.h>

int main() {
    /*
    Leia uma velocidade em km/h (quilometros por hora) e apresente-a convertida em m/s ˆ
    (metros por segundo). A formula de convers ´ ao˜ e: ´ M = K/3.6, sendo K a velocidade em
    km/h e M em m/s.
    */
    float kmh;
    scanf("%f", &kmh);
    float ms = kmh / 3.6;
    printf("%.2f\n", ms);
}