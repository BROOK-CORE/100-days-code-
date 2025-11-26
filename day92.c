// Q92: Find the first repeating lowercase alphabet in a string.

#include <stdio.h>

char firstRepeatingChar(const char *str) {
    int freq[26] = {0}; 

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z') {
            if (freq[ch - 'a'] == 1) {
                return ch; 
            }
            freq[ch - 'a']++;
        }
    }

    return '\0'; 
}

int main() {
    char str[] = "stress";

    char result = firstRepeatingChar(str);
    if (result != '\0') {
        printf("%c\n", result);
    } else {
        printf("None\n");
    }

    return 0;
}
