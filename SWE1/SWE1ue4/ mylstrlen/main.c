/*---------------------------------------------*\
| File: mystrlen                                |
| Date: 01.12.2019                              |
| progtimeest: 5min                             |
| progtimereal: 5min                            |
| author: Peter Varga                           |
| e-mail: pvarga.its-b2019@fh-salzburg.ac.at    |
| Salzburg University of Applied Sciences       |
| Information Technology & Systems Managment    |
| SWE1 - ILV04, exercise 3                      |
\*---------------------------------------------*/
#include <stdio.h>
#include <string.h>

int main() {
    int cnt=0;
    long int len;

    char str[256];
    printf("Geben is ein Satz an:");
    gets(str);
    len = strlen(str);
    /*for(int i=0; i < len; i++){
        if(str[i]>cnt)
            cnt++;
    }*/
    printf("Die laenge von string ist: %d", len);
    return 0;
}