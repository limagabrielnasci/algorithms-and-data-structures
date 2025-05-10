#include <stdio.h>

void reverseString(char* s, int sSize);

int main() {
    char s[] = "hello";
    reverseString(s,5);
    printf("%s\n", s);
}

void reverseString(char* s, int sSize) {
    int start = 0, end = sSize - 1;
    while (start < end) {
        char tmp = s[start];
        s[start] = s[end];
        s[end] = tmp;
        start++;
        end--;
    }
}