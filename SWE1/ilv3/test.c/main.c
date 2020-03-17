#include <stdio.h>
#include <stdlib.h>
char pass[] = "Peter";
char y[] = "";
int main() {
    int ch, i;
    int zahler = 0;

    while((ch=fgetc(stdin))!=EOF)
        /*for(i=0; i<5; i++){
            if (ch[i] =! pass[i]){
                printf("ist nicht korrekt!");
            }
        }*/
        //fputc(ch, stdout);
        //y[zahler] = ch;
        zahler++;

    printf("%c\n", pass[0]);
    printf("%c\n", pass[1]);
    printf("%c\n", pass[2]);
    printf("%c\n", pass[3]);
    printf("%c\n", pass[4]);



    return 0;
}