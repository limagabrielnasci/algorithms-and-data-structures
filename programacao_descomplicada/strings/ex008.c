#include <stdio.h>
#include <string.h>

int main() {
    /*
    Fac¸a um programa que conte o numero de 1’s que aparecem em um string. Exemplo: ´
    “0011001” -> 3
    */
    char nums[20];
    int qtdUm = 0;
    fgets(nums, sizeof(nums), stdin);
    for (int i = 0; i < strlen(nums); i++) {
        if (nums[i] == '1') {
            qtdUm++;
        }
    }
    printf("%d\n", qtdUm);
}