// Bitwise operators are used to perform bit-level operations on data.
// They operate on the individual bits of the operands and return a result based on the specific operation being performed.
// The common bitwise operators include:

#include <stdio.h>

int main() {
    int a = 5;  // In binary: 0101
    int b = 3;  // In binary: 0011
    int c;

    c = a & b;  // Bitwise AND
    printf("Bitwise AND (a & b): %d\n", c); // Output: 1 (0001)

    c = a | b;  // Bitwise OR
    printf("Bitwise OR (a | b): %d\n", c); // Output: 7 (0111)

    c = a ^ b;  // Bitwise XOR
    printf("Bitwise XOR (a ^ b): %d\n", c); // Output: 6 (0110)

    c = ~a;     // Bitwise NOT
    printf("Bitwise NOT (~a): %d\n", c); // Output: -6 (in two's complement)

    c = a << 1; // Left shift
    printf("Left Shift (a << 1): %d\n", c); // Output: 10 (1010)

    c = a >> 1; // Right shift
    printf("Right Shift (a >> 1): %d\n", c); // Output: 2 (0010)

    return 0;
}