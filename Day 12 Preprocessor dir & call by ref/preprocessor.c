#include <stdio.h>
// #define :is used to denfine in macro
#define PI 3.1415

// Undefine:is used to undefine in macro
#define age 21
#undef age

// printf("Age:-%d", age);// this code was commnted becaused value is undefine they throw error
// #ifdef:used to include a section of code if a certain marco is defined by #define
#ifdef PI
// #define msg "PI is defined"
#define PI 4.1 /*reasign the value of PI*/
#endif

#define MIN 21

#if MIN > 20
#define msg "MIN is Greater than 20"

#elif MIN == 20
#define msg "MIN  is equal than 20"

#else
#define msg "MIN is less 20"
#endif

// #error "error by user";

// #define Printline
// printf("%d %s\n", __LINE__, __FILE__);
// #line 34 "pre.c"

int main()
{
    printf("PI:-%f", PI);
    printf("PI=%.131f msg=%s\n", PI, msg);
    printf("area of circle:-%f\n", (PI * 5 * 5));

    char str[100] = "circle";
    // printf("str len=%d\n", strlen(str));

    // printf("MAX=%d\n", MAX);
    printf("msg=%s\n", msg);

    // inbulit function
    printf("line=%d\n", __LINE__);

    printf("time:-%s\n", __TIME__); // time function
    printf("file:-%s\n", __FILE__);
    printf("Date:-%s\n", __DATE__);

#define rate 9.36
#define time 5
#define num 5

    int P = 1000;
    printf("compound interest:-%f", (P * (1 + (rate / num)) * num * time));
    return 0;
}