#include <stdio.h>
#include <stdbool.h>

bool areOccurrencesEqual(char* s);

int main() {
    char s[1000];
    printf("enter a string: ");
    scanf(" %[^\n]s", s);
    if (areOccurrencesEqual(s)) {
        printf("true\n");
    } else {
        printf("false\n");
    }
}

bool areOccurrencesEqual(char* s) {
    int freq[26] = {0};

    for (int i = 0; s[i]; i++) {
        if (s[i] < 'a' || s[i] > 'z') return false;
        freq[s[i] - 'a']++;
    }

    int c = 0;
    for (int i = 0; i < 26; i++) {
        if (freq[i]) {
            if (c == 0) c = freq[i];
            else if (freq[i] != c) return false;
        }
    }
    return true;
}
