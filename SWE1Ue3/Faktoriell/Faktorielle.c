#include <stdio.h>

unsigned long long int zahl;

unsigned long long int fakultaet(int x) {
    if (x > 1){
        int y = x * fakultaet(x - 1);
        return y;}
    else{
            return 1;
        }

}
int main() {
    printf("Geben sie ein Zahl 12 an:\n" );
    scanf("%llu", &zahl);
   if(zahl > 15){
        unsigned long long int dzahl;
        dzahl = fakultaet(zahl) / 100000;
        printf("%llu * 10^6\n", dzahl);
    }
    else {
        printf("Fakultaet der Zahl %llu ist: %llu\n", zahl, fakultaet(zahl));
    }
    return main();
}