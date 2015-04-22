#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void randomize(int *arr, int size) {
    int i, r = 0;
    memset(arr, -1, sizeof(int) * size);
    srand(time(NULL));
    for(i = 0; i < size; ++i) {
	r = rand() % size;
        if(arr[r] == -1) { arr[r] = i; }
	else { --i; }
    }
}

void swap(int *arr, int first, int second) {
    int temp = 0;

    temp = arr[first];
    arr[first] = arr[second];
    arr[second] = temp;
}

void print(int *arr, int size) {
    int i = 0;
    for(i = 0; i < size; ++i) {
	printf("%d  ", arr[i]);
    }
    printf("\n");
}
