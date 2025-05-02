#include <stdio.h>
#include <string.h>

int main() {
    // Crie um programa que compara duas strings (nao use a func¸ ˜ ao strcmp).
    int equal = 1;
    char s1[20], s2[20];
    fgets(s1, sizeof(s1), stdin);
    fgets(s2, sizeof(s2), stdin);

    for (int i = 0; s1[i] != '\0'; i++) {
        if (s1[i] == '\n') {
            s1[i] = '\0';
            break;
        }
    }

    for (int i = 0; s2[i] != '\0'; i++) {
        if (s2[i] == '\n') {
            s2[i] = '\0';
            break;
        }
    }

    int l1 = 0, l2 = 0;
    while (s1[l1] != '\0') l1++;
    while (s2[l2] != '\0') l2++;

    if (l1 != l2) {
        equal = 0;
    } else {
        for (int i = 0; s1[i] != '\0'; i++) {
            if (s1[i] != s2[i]) {
                equal = 0;
                break;
            }
        }
    }
    
    if (equal == 1) {
        printf("strings are equal\n");
    } else {
        printf("strings are different\n");
    }
}