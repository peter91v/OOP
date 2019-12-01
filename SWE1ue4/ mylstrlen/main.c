#include <stdio.h>
#include <string.h>

int main() {
    int cnt=0;
    long int len;

    char str[256];
    printf("Geben is ein Satz an:");
    gets(str);
    len = strlen(str);
    for(int i=0; i < len; i++){
        if(str[i]>=cnt)
            cnt++;
    }
    printf("Die laenge von string ist: %d", cnt);
    return 0;
}