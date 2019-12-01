#include <stdio.h>
#include <string.h>

int main() {
    char str1[256];
    char str2[256];

    gets(str1);
    strcpy(str2, str1);
    printf("Eingegebene text (str1):\n");
    printf("%s\n", str1);

    printf("Ausgabe str2:\n");
    printf("%s", str2);

    return 0;
}