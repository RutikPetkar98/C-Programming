#include<stdio.h>

int main(){
    int arr[5] = {22, 5, 6, 0, 12};
    int i, j, key;
    // Insertion Sort Algorithm
    for (i = 1; i < 5; i++) {
        key = arr[i];
        j = i - 1;

        // Move elements that are greater than key to one position ahead
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }

    // Print the sorted array
    printf("Sorted array:\n");
    for (i = 0; i < 5; i++) {
        printf("[%d] = %d\n", i, arr[i]);
    }
    
    return 0;
}
