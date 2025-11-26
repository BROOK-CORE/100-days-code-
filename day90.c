// Q90: Toggle case of each character in a string.

#include <stdio.h>

void toggleCase(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 'a' + 'A'; 
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] - 'A' + 'a'; 
        }
        i++;
    }
}
int main() {
    char str[100];
    scanf("%s", str);
    toggleCase(str);
    printf("%s\n", str);
    return 0;
}
