#include <stdio.h>
#include <limits.h>

int main() {
    int arr[] = {12, 45, 8, 67, 23};
    int i;
    int size = sizeof(arr) / sizeof(arr[0]);

    int smallest = INT_MAX;
    int secondSmallest = INT_MAX;

    for(i = 0; i < size; i++) {
        if(arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] < secondSmallest && arr[i] != smallest) {
            secondSmallest = arr[i];
        }
    }

    printf("Second Smallest = %d", secondSmallest);

    return 0;
}