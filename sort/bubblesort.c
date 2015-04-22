#include <stdio.h>
#include <stdlib.h>
#include "randomize.c"

void sort(int *arr, int size);

int main() {
    int size = 100000;
    int rand[size];
    randomize(rand, size);

//    print(rand, size);
    sort(rand, size);
//    print(rand, size);

    return 0;
}

void sort(int *arr, int size) {
    int i, swapped = 0;
    do {
        swapped = 0;
	for(i = 1; i < size; i++) {
	    if(arr[i - 1] > arr[i]) {
		swap(arr, i - 1, i);
		swapped = 1;
	    }
	}
    } while(swapped);
}
