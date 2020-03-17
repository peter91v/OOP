#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//defines amount of values to be sorted
#define numberscount 3//ATTENTION! if you increase this to 12 or above it could take a while to process!

//sorts array randomly until it is sorted
void bogosort(int *arr, int length);
//swaps 2 pointers
void swap(int *a, int *b);
//checks if the array is sorted
int checkifsorted(int *arr, int length);

double counter = 0;    //to count how many cycles bogosort has to runs through to sort the array

//creats array and fills it with random number
//shows the unsorted array then calls bogosort and then shows the sorted array
int main() {
    srand(time(NULL));
    int arr[numberscount];      //creates array with pre-defined length
    int arr_size = sizeof(arr)/ sizeof(arr[0]);     //finds size of array

    //fills array with random numbers
    for (int x = 0; x < arr_size; ++x) {
        arr[x] = rand() % 100;
    }

    //displays the unsorted array
    printf("\nUnsorted:\n");
    for (int y = 0; y < arr_size; ++y) {
        printf("%i ",arr[y]);
    }
    printf("\n");   //formatting reasons

    bogosort(arr, arr_size);    //calls bogosort and passes a pointer to the first element in the array and the length of the array

    //displays the sorted array
    printf("\nSorted:\n");
    for (int x = 0; x < arr_size; ++x) {
        printf("%i ",arr[x]);
    }
    printf("\n");   //formatting reasons

    counter= (counter/1000000);
    //displays the number of cycles it had to run through
    printf("\nIt took %.2d Million cycles to find the correct order with %i numbers", counter, arr_size);

    return 0;
}

//sorts array randomly until it is sorted
void bogosort(int *arr, int length) {
    //runs as long as the array is not sorted
    while (checkifsorted(arr,length) == 0) {
        srand(time(NULL));

        //sorts the array randmonly
        for (int x = 0; x < length; ++x) {
            swap(&arr[x],&arr[rand() % length]);    //calls swap function with one random pointer
        }
        counter++;      //increases cycle counter
    }
}

//swaps 2 pointers
void swap(int *a, int *b)
{
    int temp = *a;      //creates and fills temp with a
    *a = *b;        //swaps a and b
    *b = temp;      //fills b with temp
}

//checks if the array is sorted
int checkifsorted(int *arr, int length) {
    //goes through the array and checks if value x is bigger than the next one in the array
    for (int x = 0; x < length-1; ++x) {
        if (arr[x] > arr[x+1])
            return 0;       //if array is not sorted in returns 0
    }
    return 1;   // if array is sorted it returns 1
}
