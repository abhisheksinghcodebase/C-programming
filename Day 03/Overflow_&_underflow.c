// Overflow and Underflow of data in c

#include <stdio.h>

int main(){
    // Overflow of data
    int a = 2147483647; // Maximum value for a 32-bit signed integer
    printf("Value of a before overflow: %d\n", a);
    a = a + 1; // This will cause an overflow
    printf("Value of a after overflow: %d\n", a); // The value will wrap around to the minimum value for a 32-bit signed integer

    // Underflow of data
    int b = -2147483648; // Minimum value for a 32-bit signed integer
    printf("Value of b before underflow: %d\n", b);
    b = b - 1; // This will cause an underflow
    printf("Value of b after underflow: %d\n", b); // The value will wrap around to the maximum value for a 32-bit signed integer
    return 0;
}