#include <stdio.h>

int rutik(int a, int b)
{
    printf("in add():-%d\n", (a + b));
    return a + b;
}
int main()
{
    int a = 20;
    printf("address of a:-%x\n", &a); // get address using %x and &

    // syntax
    // data-type *ptr_name=&var_name(var=variable)
    int *aptr = &a;
    printf("aptr-%x\n", aptr);
    printf("*aptr=%d\n", *aptr); // pointer de_referencing

    // NULL Pointer
    int *null_ptr = NULL;
    printf("NUll_Ptr:-%d", null_ptr);

    // Simple Pointer(ptr)
    int *aptr1 = &a;
    printf("aptr1%x\n", aptr1);
    printf("*aptr1=%d\n", *aptr1);

    // Array_Pointer
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr_arr = &arr;
    printf("(X)arr:-%x\n", arr); // address of array
    printf("arr:-%d\n", ptr_arr);
    printf("*ptr_arr:-%d\n", *ptr_arr);
    // ptr_arr++;
    // printf("*ptr_arr++:-%d\n", ptr_arr);
    // ptr_arr++;
    // printf("*ptr_arr++:-%d\n", ptr_arr); // every time change the value of address
    // ptr_arr--;
    // printf("*ptr_arr--:-%d\n", *ptr_arr);

    while (ptr_arr != NULL && *ptr_arr != 0)
    {
        printf("while->*ptr_arr:-%d\n", *ptr_arr);
        ptr_arr++;
    }

    // function pointer(pointer to function)
    int (*fptr)(int, int) = &rutik;
    int result = fptr(3, 3);
    printf("result:-%d", result);

    return 0;
}