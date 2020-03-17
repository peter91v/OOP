/*
File: BMI rechner
Date: 17.10.2019
progtimeest: 20min
progtimereal: 32min
author: Peter Varga
e-mail: pvarga.its-b2019@fh-salzburg.ac.at

Salzburg University of Applied Sciences
Information Technology & Systems Managment
SWE1 - ILV02, exercise 3
*/

#include <stdio.h>
#include <stdlib.h>

float kg;
float g;
float  BMI;
char M, W, Geschlecht;


int main (){
    printf("Geben sie ihre Koerpergewicht an: ");
    scanf(" %f", &kg);
    printf("Geben sie ihre Koerbergoesse an: ");
    scanf(" %f", &g);
    printf("Geben sie ihere geschlecht an.\n W fuer Weiblich, M fuer Maennlich\n");
    scanf(" %s", &Geschlecht);
    float korpG = g * g;
    BMI = kg / korpG;

    switch (Geschlecht)
    {
        case 'M':
            if (BMI < 20){ printf("Untergewicht.\n");}
            else if (BMI > 21, BMI < 25){ printf("Normalgewicht\n");}
            else if (BMI > 26, BMI < 30){ printf("Uebergewicht\n");}
            else if (BMI > 31, BMI < 40){ printf("Adipositas\n");}
            else if (BMI > 41){ printf("Massive Adipositas\n");}
            break;
        case 'W':
            if (BMI < 19){ printf("Untergewicht.\n");}
            else if (BMI > 20, BMI < 24){ printf("Normalgewicht\n");}
            else if (BMI > 25, BMI < 30){ printf("Uebergewicht\n");}
            else if (BMI > 31, BMI < 40){ printf("Adipositas\n");}
            else if (BMI > 41){ printf("Massive Adipositas\n");}
            break;
    }

    printf("Ihre BMI index ist: %f\n", BMI);

    return 0;
}