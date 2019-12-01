#include <stdio.h>

int main() {
    //m = piramid stufen, j = zahl der lehr stelle
    int m, i, j, cnt;
    printf("Geben sie den stufen zahl an: \n");
    scanf("%d", &m);

    for( i=1; i <= m; ++i, cnt = 0)
    {//so lang der anzahl der leerstellen kleine als der stufe - zahler(i), wird der leerstelle 1 erhöht.
        for ( j=1  ; j <=m-i; ++j)
        {
                printf("  ");
        }
                while(cnt != 2*i-1)
                {
                    printf("* ");
                    ++cnt;
                }

        printf("\n");
        }

    return 0;
}