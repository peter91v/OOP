#include <stdio.h>

int i_roman[] = {1000, 900, 500, 400,100,90, 50, 40, 10 ,9, 5, 4, 1};
char *s_roman[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
int main() {
    int i;
    int z, y;
    scanf("%d", &z);
    while (z != 0){
        y= z /i_roman[0];
    }

    for (i=0; i< sizeof(i_roman)/ sizeof(z); i++){
        printf("%i\n",i_roman[i]);
        printf("%s\n", s_roman[i]);
    }


        return 0;
}