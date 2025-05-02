#include <stdio.h>

struct Vector {
    float x;
    float y;
    float z;
};

int main() {
    /*
    Considerando a estrutura
    struct Vetor{
        float x;
        float y;
        float z;
    };
    para representar um vetor no R3
    , implemente um programa que calcule a soma de dois
    vetores.
    */
    struct Vector v1, v2, result;

    printf("Vector 1 (x y z): "); scanf("%f %f %f", &v1.x, &v1.y, &v1.z);
    printf("Vector 2 (x y z): "); scanf("%f %f %f", &v2.x, &v2.y, &v2.z);

    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    result.z = v1.z + v2.z;

    printf("Sum: (%.2f, %.2f, %.2f)\n", result.x, result.y, result.z);
}