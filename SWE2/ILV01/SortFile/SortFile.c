/*---------------------------------------------*\
| File: SortFile.c                              |
| Date: 16.03.2020                              |
| progtimeest: 60min                            |
| progtimereal: min                           |
| author: Peter Varga                           |
| e-mail: pvarga.its-b2019@fh-salzburg.ac.at    |
| Salzburg University of Applied Sciences       |
| Information Technology & Systems Managment    |
| SWE2 - ILV01, exercise 3.                     |
\*---------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
const int MAX = 1024;
/* inserts <value> into <sorted> containing <count> values */
void insert_sorted (long *sorted, int count, long value)
{
    int i = 0;

    sorted[count] = value;
    if (count == 0) return;
    for (i = count;i >= 0; i--) {
        if (value < sorted[i-1])
            sorted[i] = sorted[i-1];
        else break;
    }
    sorted[i] = value;
}
int main (int argc, char *argv[])
{
    FILE *infile = NULL;
    long sorted[1024];
    long value;
    int count = 0;
    int i = 0;
    if (argc < 2) {
        fprintf (stderr, "Usage : zahlen.txt\n", argv[0]);
        return 1;
    }
    infile = fopen (argv[1], "r");
    if (NULL == infile) {
        perror ("fopen");
        return -1;
    }
/* while file not ends */
    while (!feof (infile)) {
        fscanf (infile, "%ld\n", &value); /* fetch value */
        insert_sorted (sorted, count, value); /* sort */
        ++count; /* increase number of sorted values */
    }
/* display values */
    printf ("Sorted values : ");
    for (i = 0; i < count; i++ ) {
        printf ("%ld ", sorted[i]);
    }
/* cleanup */
    if (infile) {
        fclose (infile);
        infile = NULL;
    }
    return 0;
}


