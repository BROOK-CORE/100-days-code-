// Q91: Remove all vowels from a string.

#include <stdio.h>

int is_vowel(char ch){

    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
}

void remove_vowels(char* str) {
    int i = 0, j = 0;

    while (str[i] != '\0') {
        if (!is_vowel(str[i])) {
            str[j++] = str[i];
        }
        i++;
    }
    str[j] = '\0';  
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str); 

    remove_vowels(str);

    printf("Output: %s\n", str);

    return 0;
}
