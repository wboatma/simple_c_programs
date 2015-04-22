#include <stdio.h>
#include <stdlib.h>

void reverse(int *arr, int size);
void print(int *arr, int size);
void swap(int *arr, int first, int second);

int main() {
    int size = 261;
    int arr[size];
    int i;
    for(i = 0; i < size; i++) {
	arr[i] = i;
    }

    reverse(arr, size);

    return 0;
}

void reverse(int *arr, int size) {
    int pivot = size / 2;
    int even = (size % 2 == 0) ? 1 : 0;
    int i, j;

    print(arr, size);
    for(i = 0, j = size - 1; i < pivot; ++i, --j) {
        swap(arr, i, j);
    }
    if(!even) { swap(arr, i, j); }
//    for(i = size - 1; i > pivot; --i, ++j) {
//	if(even) {
//
//	} else {
//	    temp = arr[i];
//	    arr[i] = arr[(i % pivot == 0) ? 0 : pivot - (i % pivot) ];
//	    arr[i % pivot] = temp;
//	}
//    }
    print(arr, size);
}

void print(int *arr, int size) {
    int i;
    for(i = 0; i < size; i++) {
	printf("%d  ", arr[i]);
    }
    printf("\n");
}

void swap(int *arr, int first, int second) {
    int temp = arr[first];
    arr[first] = arr[second];
    arr[second] = temp;
}
