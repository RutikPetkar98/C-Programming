#include <stdio.h>
int fib(int n);
int main()
{

    for (int i = 0; i <= 10; i++)
    {
        int num = fib(i);
        printf("fibonacci_num:%d\n", num);
    }
    return 0;
}

int fib(int n)
{

    if (n == 1)
    {
        return 1;
    }
    if (n == 0)
    {
        return 0;
    }

    return fib(n - 1) + fib(n - 2);
}