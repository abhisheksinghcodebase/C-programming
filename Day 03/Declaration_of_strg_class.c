// Declaration of storage class in C
#include <stdio.h> // Input/output library for C programming language.

int main() {
    // Automatic storage class
    auto int a = 10; // Declare an automatic variable named a and initialize it with the value 10
    printf("Value of a (automatic): %d\n", a); // Print the value of the automatic variable a

    // Register storage class
    register int b = 20; // Declare a register variable named b and initialize it with the value 20
    printf("Value of b (register): %d\n", b); // Print the value of the register variable b

    // Static storage class
    static int c = 30; // Declare a static variable named c and initialize it with the value 30
    printf("Value of c (static): %d\n", c); // Print the value of the static variable c

    // External storage class
    extern int d; // Declare an external variable named d (defined in another file)
    printf("Value of d (external): %d\n", d); // Print the value of the external variable d

    return 0;
}