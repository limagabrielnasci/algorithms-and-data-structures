#include <stdio.h>

void reverseString(char* s, int sSize);

int main() {
    char s[] = "hello";
    reverseString(s,5);
    printf("%s\n", s);
}

void reverseString(char* s, int sSize) {
    int inicio = 0, fim = sSize - 1;
    while (inicio < fim) {
        char tmp = s[inicio];
        s[inicio] = s[fim];
        s[fim] = tmp;
        inicio++;
        fim--;
    }
}