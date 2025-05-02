#include <stdio.h>

int countEvens(int size, int *nums);

int main() {
    /*
    Fac¸a uma func¸ao que receba um vetor de inteiros e retorne quantos valores pares ele ˜
    possui.
    */
    int nums[10];
    for (int i = 0; i < 10; i++) {
        printf("enter a number: "); scanf("%d", &nums[i]);
    }
    int evenCount = countEvens(10, nums);
    printf("%d\n", evenCount);
}

int countEvens(int size, int *nums) {
    int e = 0;
    for (int i = 0; i < size; i++) {
        if (nums[i] % 2 == 0) {
            e++;
        }
    }
    return e;
}