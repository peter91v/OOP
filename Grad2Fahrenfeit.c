/*
File: Grad2Fahrenheit v1.01
Date: 17.10.2019
progtimeest: 10min
progtimereal: 5min
author: Peter Varga
e-mail: pvarga.its-b2019@fh-salzburg.ac.at

Salzburg University of Applied Sciences
Information Technology & Systems Managment
SWE1 - ILV02, exercise 1
*/

#include <stdio.h>
#include <stdlib.h>

// Formel zu um rechnen °F = °C × 1,8 + 32
float fahr;
float celsius;
int choose;

int main(){
    printf("Was möchten Sie umrechnen. Wählen sie von der folgende optionen.\n");
    printf("1. Celsius in Fahrenheit\n");
    printf("2. Fahrenheit in celsius\n");
    scanf("%d", &choose);

    if (choose == 1)
    {
        printf("Geben sie den Grad in celsius an:");
        scanf("%f", &celsius);
        fahr= celsius * 1.8 + 32;
        printf("%f Fahrenheit", fahr);
    }
    else
    {
        printf("Geben sie den Grad in celsius an:");
        scanf("%f", &fahr);
        celsius = (fahr - 32)/1.8;
        printf("%f Celsius", celsius);
    }

    return 0;

}
