#include <stdio.h>
#include <stdlib.h>

int main() {
    int ch;
    while((ch=fgetc(stdin))!=EOF)
        fputc(ch, stdout);
    return 0;
}