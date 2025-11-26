// Q89: Count frequency of a given character in a string.

#include <stdio.h>

int main() {
    char input[100];
    char target;
    int count = 0;

    scanf("%s", input);

    scanf(" %c", &target);  

    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] == target) {
            count++;
        }
    }

    printf("%d\n", count);
return 0;
}
