#include <stdio.h>

int main() {
    /*
    Fac¸a um programa que leia um vetor de 8 posic¸oes e, em seguida, leia tamb ˜ em dois va- ´
    lores X e Y quaisquer correspondentes a duas posic¸oes no vetor. Ao final seu programa ˜
    devera escrever a soma dos valores encontrados nas respectivas posic¸ ´ oes ˜ X e Y .
    */
    int arr[8], sum = 0, x, y;;
    for (int i = 0; i < 8; i++) {
        scanf("%d", &arr[i]);
    }
    printf("pos:\n");
    scanf("%d %d", &x, &y);
    sum = arr[x] + arr[y];
    printf("sum = %d\n", sum);
}