// Special operators in C

#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    int c = 30;

    // sizeof operator
    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Size of a: %lu bytes\n", sizeof(a));

    // comma operator
    int x = (5, 10); // x will be assigned the value of the last expression
    printf("Value of x: %d\n", x);

    return 0;
}