#include <stdio.h>
#include <string.h>
#include <dxtmpl.h>


int main() {
    FILE *fp = fopen("test.txt", "r");

    if (fp == NULL){
        perror("main");
        exit(EXIT_FAILURE);
    }

    char code[] = "Peter";
    char file[] = "";
    int ch = 0;

    int s = 0;
    while (ch = fgetc(fp) !=EOF){
        file[s]=ch;
        s++;
    }
    int laen = strlen(file);
    printf("Laenge Text in File: %d Zeichnen\n", laen);

    char encoding[] = "";
    int count = 0, i;
    for(i=0; i<strlen(file); i-i/strlen(code)){
        for(int x = 0; x<strlen(code); x++){
            encoding[count] = file[count] ^ code[x];
            count++;
            if(count>=strlen(file)) break;
        }
    }

    for(int x=0; x<strlen(encoding); x++){
        printf("encoding: %d\n", encoding[x]);
    }
    return 0;
}