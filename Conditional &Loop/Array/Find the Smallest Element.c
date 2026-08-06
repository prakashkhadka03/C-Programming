#include <stdio.h>

int main() {
    int arr[] = {12, 45, 8, 67, 23};
    int i;
    int size = sizeof(arr) / sizeof(arr[0]);
    int smallest = arr[0];

    for(i = 1; i < size; i++) {
        if(arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    printf("Smallest Element = %d", smallest);

    return 0;
}