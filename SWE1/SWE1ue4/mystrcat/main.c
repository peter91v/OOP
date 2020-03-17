/*---------------------------------------------*\
| File: mystrcat                                |
| Date: 01.12.2019                              |
| progtimeest: 5min                             |
| progtimereal: 5min                            |
| author: Peter Varga                           |
| e-mail: pvarga.its-b2019@fh-salzburg.ac.at    |
| Salzburg University of Applied Sciences       |
| Information Technology & Systems Managment    |
| SWE1 - ILV04, exercise 5                      |
\*---------------------------------------------*/
#include <stdio.h>

int main() {
    char str1[256];
    char str2[256];
    printf("Put your first text in!\n");
    gets(str1);
    printf("Put your second text in!\n");
    gets(str2);
    printf("%s %s", str1,str2);
    return 0;
}