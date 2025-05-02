#include <stdio.h>

float avg(int size, float *arr);

int main() {
    // Fac¸a uma func¸ao que receba um vetor de reais e retorne a m ˜ edia dele.
    float arr[10];
    for (int i = 0; i < 10; i++) {
        printf("enter a number: "); scanf("%f", &arr[i]);
    }
    float average = avg(10, arr);
    printf("average: %.2f\n", average);
}

float avg(int size, float *arr) {
    float avg, sum = 0;
    for (int i = 0; i < size; i++) 
        sum += arr[i];
    avg = sum / size;
    return avg;
}