#include <stdio.h>

int quersumme(int z) {
    int sum = 0;
    while (z > 0) {
        sum += z % 10;
        z /= 10;
    }
    return sum;
}
int main() {
    int zahl;
    printf("GEben sie ein Zahl ein: ");
    scanf("%d", &zahl);


    printf("Ergebniss ist: %d", quersumme(zahl));
    return 0;
}