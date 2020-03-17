#include <stdio.h>
#include <stdlib.h>

int print(int *a, int n) {
    int i;
    for (i = 0; i < n;  i++)
        printf("%d ", a[i]);}

int main() {
    int arr[] = {1,34,29,30,2,7,55,14,75,65};

    int i = 0;

    for(i = 0; i < 10; i++){
        for(int j = 0; j < i; j++){
            if(arr[j] > arr[i]){
                int tmp = arr[j];
                arr[j] = arr[i];
                arr[i] = tmp;

            }
        }
    }
    print(&arr[0], i );

    return 0;
}
