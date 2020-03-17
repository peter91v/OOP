#include <stdio.h>

int x, y;

int main(){
    printf("x_koordinate:");
    scanf("%d", &x);
    printf("y_koordinate:");
    scanf("%d", &y);


    if (x > 0 && y > 0)
        printf("Der Punkt (%d, %d) liegt im 1. Quadrant\n", x, y);
    else if (x < 0 && y > 0)
        printf("Der Punkt (%d, %d) liegt im 2. Quadrant\n", x, y);
    else if (x < 0 && y < 0)
        printf("Der Punkt (%d, %d) liegt im 3. Quadrant\n", x, y);
    else if (x > 0 && y < 0)
        printf("Der Punkt (%d, %d) liegt im 4. Quadrant\n", x, y);
    else if (x == 0 && y > 0)
        printf("Der Punkt (%d, %d) liegt auf der y-Achse\n", x, y);
    else if (x > 0 && y == 0)
        printf("Der Punkt (%d, %d) liegt auf der x-Achse\n", x, y);
    else if (x == 0 && y == 0)
        printf("Der Punkt (%d, %d) ist der Ursprung\n", x, y);

    return 0;
}