/*
File: BMI rechner
Date: 18.10.2019
progtimeest: 10min
progtimereal: 15min
author: Peter Varga
e-mail: pvarga.its-b2019@fh-salzburg.ac.at

Salzburg University of Applied Sciences
Information Technology & Systems Managment
SWE1 - ILV02, exercise 4
*/
#include <stdio.h>

int main()
{
    float gehalt;

    printf("Geben Sie Ihre Gehalt an: ");
    scanf("%f", &gehalt);

    if (gehalt > 1000) {
        float zuschlag;
        zuschlag = (gehalt * 0.0085);
        printf("Ihre Lohnerhoehung betraegt: %f Euro, Ihre gesamt Lohn ist: %f Euro", zuschlag, gehalt + zuschlag);
    }
    if (gehalt < 1000) {
        float zuschlag;
        zuschlag = (gehalt * 0.0209);
        printf("Ihre Lohnerhoehung betraegt: %f Euro, Ihre gesamt Lohn ist: %f Euro", zuschlag, gehalt + zuschlag);
    }
    return 0;
}