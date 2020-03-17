#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    double value[10000][2];
    FILE *archivo;
    archivo = fopen("D:\\C program\\C projects\\Miki programs\\file.txt","r");
    if (archivo == NULL)
        exit(1);
    i=0;
    while (feof(archivo) == 0)
    {
        fscanf( archivo, "%lf %lf %lf", &value[i][0],&value[i][1],&value[i][2]);
        printf("%10.0f %10.0f %10.0f\n", value[i][0], value[i][1], value[i][2]);
        i++;
    }

    printf("Your matrix:\n");
    for(j = 0; j < i; j++)
        printf("%10.0f %10.0f %10.0f\n", value[j][0], value[j][1], value[j][2]);

    fclose(archivo);
    return 0;
}
// fájl megnyitás
// sor felolvasása
// tördelés " "  => értékek a számok

// fájl megnyitás
// teljes szöveg felolvasása
// tördelés "\n"  => értékek tördelése " " => értékek a számok

// https://www.codingame.com/playgrounds/14213/how-to-play-with-strings-in-c/string-split