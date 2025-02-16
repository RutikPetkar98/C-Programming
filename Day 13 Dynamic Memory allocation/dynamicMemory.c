#include <stdio.h>
#include <stdlib.h>
int main()
{

    int *ptr = (int *)malloc(sizeof(int));
    printf("ptr=%x\n", ptr);

    *ptr = 10;
    printf("*ptr=%d\n", *ptr);
    printf("*ptr=%d\n", *ptr);

    // sytax
    // data=type *ptr=(type-cast*)calloc(numberofblocks,sizeof(data-type))
    // calloc dynamically allocation memeory in sync format /liner order

    int *ptr2 = (int *)calloc(5, sizeof(int));
    int i = 10, size = 1;
    printf("ptr2=%x\n", ptr2);
    return 0;
}