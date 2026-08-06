#include <stdio.h>
#include <limits.h>

int main() {
    int arr[] = {12, 45, 8, 67, 23};
    int i;
    int size = sizeof(arr) / sizeof(arr[0]);

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for(i = 0; i < size; i++) {
        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    printf("Second Largest = %d", secondLargest);

    return 0;
}