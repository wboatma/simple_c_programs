#include <stdio.h>
#include <stdlib.h>
#include "randomize.c"

int sort(int *arr, int start, int end);

int main() {
    int size = 100;
    int rand[size];
    randomize(rand, size);
    int start = 0;
    int end = size;

    print(rand, size);
    sort(rand, start, end);
    printf("\n");
    print(rand, size);

    return 0;
}

int sort(int *arr, int start, int end) {
    int pivot, wall, curr, i = 0;
    pivot = arr[end];
    wall = start;

    for(i = start; i < end; ++i) {
        curr = arr[i];
	if(curr < pivot && i == wall) { ++wall; }
	else if(curr < pivot) { 
	    swap(arr, wall, i);
	    ++wall;
	}
    }
    swap(arr, wall, end);

    if((wall - 1) - start > 1 ) { sort(arr, start, wall - 1); }
    if(end - (wall + 1) > 1 ) { sort(arr, wall + 1, end); }
    return 0;

}
