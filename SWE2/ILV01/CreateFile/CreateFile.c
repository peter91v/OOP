/*---------------------------------------------*\
| File: CreateFile.c                            |
| Date: 16.03.2020                              |
| progtimeest: 40min                            |
| progtimereal: 80min                           |
| author: Peter Varga                           |
| e-mail: pvarga.its-b2019@fh-salzburg.ac.at    |
| Salzburg University of Applied Sciences       |
| Information Technology & Systems Managment    |
| SWE2 - ILV01, exercise 2.                     |
\*---------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


int main(int argc, const char *argv[]) {

    FILE *datei;
    int r = 100, n = 100;


    if (argc == 1) {
        printf("-h\tGibt eine kurze Beschreibung der Optionen aus\n-n\tAnzhal der Zahlen (default 100)\n-r\tZahlenbereich (default=100)\n");
        return -1;
    }

    fp = fopen("Nummbers.txt", "w");
    if (fp == NULL) {
        perror("Fehler\n");
        return -1;
    }

    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "-h") == 0) {
            printf(" -h\tGibt eine kurze Beschreibung der Optionen aus\n -n\tAnzhal der Zahlen (default 100)\n -r\tZahlenbereich (default=100)\n");
            return 0;
        }
        if (strcmp(argv[i], "-r") == 0) {
            r = atoi(argv[i + 1]);
        }
        if (strcmp(argv[i], "-n") == 0) {
            n = atoi(argv[i + 1]);
        }
    }


    int array[n];

    srand((int) time(NULL));

    for (int i = 0; i < n; i++) {
        array[i] = (rand() % r) + 1;
        printf("%d, ", array[i]);
        fprintf(datei, "%d, ", array[i]);
    }


    fclose(datei);

    return 0;

}
