#include <stdio.h>

int toSeconds(int h, int m, int s);

int main() {
    /*
    Fac¸a uma func¸ao que receba 3 n ˜ umeros inteiros como par ´ ametro, representando horas, ˆ
    minutos e segundos, e os converta em segundos.
    */
    int h, m, s;
    printf("enter a hour, minutes, seconds: "); scanf("%d %d %d", &h, &m, &s);
    printf("%d\n", toSeconds(h, m, s));
}

int toSeconds(int h, int m, int s) {
    return h * 3600 + m * 60 + s;
}