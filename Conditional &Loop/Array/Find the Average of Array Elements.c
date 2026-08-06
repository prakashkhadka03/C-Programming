#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int i, sum = 0;
    float average;
    int size = sizeof(arr) / sizeof(arr[0]);

    for(i = 0; i < size; i++) {
        sum += arr[i];
    }

    average = (float)sum / size;

    printf("Average = %.2f", average);

    return 0;
}