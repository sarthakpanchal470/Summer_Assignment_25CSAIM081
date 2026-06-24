#include <stdio.h>

int main() {
    char str[100];
    int i, j;
    int visited[256] = {0};

    printf("Enter a string");
    fgets(str, sizeof(str), stdin);

    printf("String after removing duplicates");

    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (!visited[(unsigned char)str[i]]) {
            printf("%c", str[i]);
            visited[(unsigned char)str[i]] = 1;
        }
    }

    printf("\n");

    return 0;
}