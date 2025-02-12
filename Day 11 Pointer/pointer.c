#include <stdio.h>
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

    return 0;
}