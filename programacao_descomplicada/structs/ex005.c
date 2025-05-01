#include <stdio.h>

struct Vetor {
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
    struct Vetor v1, v2, res;

    printf("vetor 1 (x y z): "); scanf("%f %f %f", &v1.x, &v1.y, &v1.z);
    printf("vetor 2 (x y z): "); scanf("%f %f %f", &v2.x, &v2.y, &v2.z);

    res.x = v1.x + v2.x;
    res.y = v1.y + v2.y;
    res.z = v1.z + v2.z;

    printf("soma: (%.2f, %.2f, %.2f)\n", res.x, res.y, res.z);
}