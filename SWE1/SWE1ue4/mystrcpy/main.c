/*---------------------------------------------*\
| File: mystrcpy                                |
| Date: 01.12.2019                              |
| progtimeest: 5min                             |
| progtimereal: 5min                            |
| author: Peter Varga                           |
| e-mail: pvarga.its-b2019@fh-salzburg.ac.at    |
| Salzburg University of Applied Sciences       |
| Information Technology & Systems Managment    |
| SWE1 - ILV04, exercise 4                      |
\*---------------------------------------------*/
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