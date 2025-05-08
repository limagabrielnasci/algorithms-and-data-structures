#include <stdio.h>

int main() {
    /*
    Escreva um programa que contenha duas vari ´aveis inteiras. Compare seus enderec¸os e
    exiba o maior enderec¸o.
    */
    int n1 = 5;
    int n2 = 9;

    printf("endereco de n1 = %p\n", &n1);
    printf("endereco de n2 = %p\n", &n2);

    if (&n1 > &n2) 
        printf("n1 is greater\n");
    else 
        printf("n2 is greater\n");
}