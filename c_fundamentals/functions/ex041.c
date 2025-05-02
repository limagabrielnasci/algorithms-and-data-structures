#include <stdio.h>

int getMax(int size, int *arr);

int main() {
    // Fac¸a uma func¸ao que receba um vetor de inteiros e retorne o maior valor. 
    int arr[10];
    for (int i = 0; i < 10; i++) {
        printf("enter a number: "); scanf("%d", &arr[i]);
    }
    int max = getMax(10, arr);
    printf("%d\n", max);
}

int getMax(int size, int *arr) {
    int maxValue = 0;
    for (int i = 0; i < size; i++) 
        if (arr[i] > maxValue) maxValue = arr[i];
    return maxValue;
}