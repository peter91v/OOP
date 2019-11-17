#include <stdio.h>
int zahl;
int fakultaet(int x) {
    if (x > 1){
        return x * fakultaet(x - 1);}
    else{
            return 1;
        }

}
int main() {
    printf("Geben sie ein Zahl an:\n" );
    scanf("%d", &zahl);

    printf("Fakultaet der zahl: %d ist %d\n", zahl, fakultaet(zahl));
return 0;
}