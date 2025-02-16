#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Step 1: Allocate memory for 5 integers
    int *arr = (int *)malloc(5 * sizeof(int));

    // Step 2: Check if memory allocation was successful
    if (arr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Step 3: Initialize and print the allocated array
    for (int i = 0; i < 5; i++)
    {
        arr[i] = i + 1;
        printf("%d ", arr[i]);
    }

    // Step 4: Reallocate memory to hold 10 integers
    arr = (int *)realloc(arr, 10 * sizeof(int));

    // Step 5: Check if reallocation was successful
    if (arr == NULL)
    {
        printf("Memory reallocation failed.\n");
        return 1;
    }

    // Step 6: Initialize new elements and print the array
    for (int i = 5; i < 10; i++)
    {
        arr[i] = i + 1;
    }

    printf("\nArray after reallocation: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    // Step 7: Free the allocated memory
    free(arr);

    return 0;
}
