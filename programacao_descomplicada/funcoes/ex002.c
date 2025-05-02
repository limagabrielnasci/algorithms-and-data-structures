#include <stdio.h>

void date(int d, int m, int y);

int main() {
    /*
    Fac¸a uma func¸ao que receba a data atual (dia, m ˜ es e ano em inteiro) e exiba-a na tela ˆ
    no formato textual por extenso. Exemplo: Data: 01/01/2000, Imprimir: 1 de janeiro de
    2000.
    */
    int day, month, year;
    scanf("%d %d %d", &day, &month, &year);
    date(day, month, year);
}

void date(int d, int m, int y) {
    char months[12][4] = {"jan", "feb", "mar", "apr", "may", "jun", "jul", "aug", "sep", "oct", "nov", "dec"};
    printf("%s %02d, %d\n", months[m - 1], d, y);
}