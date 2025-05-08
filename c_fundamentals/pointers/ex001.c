#include <stdio.h>

int main() {
    /*
    Escreva um programa que declare um inteiro, um real e um char, e ponteiros para in-
    teiro, real, e char. Associe as vari ´aveis aos ponteiros (use &). Modifique os valores de
    cada vari ´avel usando os ponteiros. Imprima os valores das vari ´aveis antes e ap ´os a
    modificac¸ ˜ao.
    */
    int i = 10;
    float f = 3.5;
    char c = 'g';

    int *pI = &i;
    float *pF = &f;
    char *pC = &c;

    printf("Antes:\n");
    printf("int: %d\n", i);
    printf("float: %.2f\n", f);
    printf("char: %c\n", c);

    *pI = 15;
    *pF = 5.8;
    *pC = 'l';

    printf("Depois:\n");
    printf("int: %d\n", i);
    printf("float: %.2f\n", f);
    printf("char: %c\n", c);


}