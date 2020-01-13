/*---------------------------------------------*\
| File: Piramid                                 |
| Date: 01.12.2019                              |
| progtimeest: 20min                            |
| progtimereal: 30min                           |
| author: Peter Varga                           |
| e-mail: pvarga.its-b2019@fh-salzburg.ac.at    |
| Salzburg University of Applied Sciences       |
| Information Technology & Systems Managment    |
| SWE1 - ILV04, exercise 1                      |
\*---------------------------------------------*/
#include <stdio.h>

int main() {
    //m = piramid stufen, j = zahl der lehr stelle
    unsigned int  m, i, j, cnt;
    printf("Geben sie den stufen zahl bis 30 an: \n");
    scanf("%d", &m);
    if(m > 30){
        printf("Zahl ist zu gross!!! Max anzahl 30!");
        return 0;
    }
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