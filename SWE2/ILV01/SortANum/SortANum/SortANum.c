/*---------------------------------------------*\
| File: SortANum.c                              |
| Date: 16.03.2020                              |
| progtimeest: 30min                            |
| progtimereal: 62min                           |
| author: Peter Varga                           |
| e-mail: pvarga.its-b2019@fh-salzburg.ac.at    |
| Salzburg University of Applied Sciences       |
| Information Technology & Systems Managment    |
| SWE2 - ILV01, exercise 1.                     |
\*---------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
//Insertionsort
void insertionsort(int *arr, int size) {
    int i, j;

    for (i = 0; i < size; i++) {
        for (j = 0; j < i; j++) {
            if (arr[j] > arr[i]) {
                swap(&arr[j], &arr[i]);
            }
        }
    }
}


int main(int argc, char **argv)
{
    if (argc < 1)
    {
        printf("Aufruf: %s N1 [, N2, N3, ...]\n", argv[0]);
        printf("        Sortiert vorzeichenlose 32-Bit-Integer\n");
        return -1;
    }

    int i;
    int *arr = (int*)malloc(sizeof(int) * (argc-1));

    for (i=0; i < argc-1; i++)
    {
        arr[i] = atoi(argv[i+1]);
    }

    insertionsort(arr, argc-1);

    //Print Array
    for (i=0; i < argc-1; i++)
    {
        printf("%5d", arr[i]);
    }
    puts("");

    return 0;
}
