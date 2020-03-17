#include <stdio.h>
#define len 10

//Array print function. (Made by David Maerzendorfer)
int print(int *a, int n) {
    int i;
    for (i = 0; i < n;  i++)
        printf("%d ", a[i]);
}
//Function for Array minimum.
int arrMin(int *c, int size) {
    int min = c[0], i;
    for (i = 1; i < size; i++) {
        if (c[i] < min) {
            min = c[i];
        }
    }
    return min;
}

//Function for Array Maximum.
int arrMax(int *d, int size) {  // int d[] = *d
    int max = d[0], i;
    for (i = 1; i < size; i++) {
        if (d[i] > max) {
            max = d[i];
        }
    }
    return max;
}

//Function for Sum Array.
int su(int *s) {
    int sum = 0, l;
    for (l = 0; l < len; l++){
        sum += s[l];}

    return sum;
}
int main(){
    int i, arr[len];

    for(i=0; i<len; i++)
        scanf("%d", &arr[i]);

    float m = (float)su(arr) / len;
    printf("Your number in Array: ");
    print(&arr[0], i );
    printf("\n");
    printf("Arithmetic middle of your Array: %.2f\n", m);
    printf("Sum of your Array: %d\n", su(arr));
    printf("Least number of your Array: %d\n", arrMin(arr, len));
    printf("Most number of your Array: %d\n", arrMax(arr, len));

    return 0;
}
