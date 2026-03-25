// Type conversion in C

#include <stdio.h>

int main() {
    int a = 10;
    float b = 5.5;

    // Implicit type conversion
    float result1 = a + b; // int is implicitly converted to float
    printf("Result of int + float: %f\n", result1);

    // Explicit type conversion
    int result2 = (int)b; // float is explicitly converted to int
    printf("Result of explicit conversion: %d\n", result2);

    return 0;
}