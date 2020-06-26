#include <stdio.h>

int main()
{
    int a = 0, b = 1;
    *(a > b ? &a : &b) = 10;
    printf("%d %d\n", a, b);
}