#include <stdio.h>

//int is_prime(long n);
int is_prime(long n) {
    int divisor=2;

    while (divisor*divisor <= n) {
        if (n % divisor == 0) {
            return(0);
        }
        divisor++;
    }
    return(1);
}

int main() {
    long n;

    do {
        printf("Enter any number larger than 1: ");
        scanf("%ld",&n);
    } while( n <= 1);

    for (n; n>=1; n--) {
        if (is_prime(n) == 1) {
            printf("%ld\n",n);
        }
    }
    return 0;
}





