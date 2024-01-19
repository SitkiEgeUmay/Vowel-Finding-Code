#include <stdio.h>
#include <string.h>

int main() {
    char text[100];
    int i = 0, j = 0, count = 0;
    char vowels[5] = "aeiou";
    char basket[100] = "";

    printf("Enter the text:\n");
    gets(text);

    for (i = 0; i < strlen(text); i++) {
        for (j = 0; j < strlen(vowels); j++) {
            if (text[i] == vowels[j]) {
                basket[count] = text[i];
                count++;
            }
        }
    }

    printf("%d,%s", count, basket);

    return 0;
}
