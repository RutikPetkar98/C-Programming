#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    printf(" inside fun a=%d b=%d\n", *a, *b);
}

void arr_total(int arr[], int size)
{
    int total = 0;
    for (int i = 0; i < size; i++)
    {
        total += arr[i];
    }
    printf("arr_total=%d\n", total);
}

void increment(int *var)
{
    *var += 1;
}
int main()
{

    int a = 5, b = 10;
    printf("Before swap:- a=%d, b=%d", a, b);

    swap(&a, &b);

    printf("After swap :a = %d, b = %d\n", a, b);

    // array
    int arr[5] = {5, 4, 3, 2, 1};
    arr_total(arr, 5);

    // increament
    int num = 10;
    printf("num=%d\n", num);
    increament(&num);
    printf("num=%d\n", num);
    return 0;
    return 0;
}