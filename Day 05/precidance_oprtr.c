// Precidence of arithmetic operators in C

#include <stdio.h>

int main(){
    //precidence of arithmetic operators in C
    int a = 10, b = 5, c = 2;
    int result;

    // Expression with default precedence
    result = a + b * c; // Multiplication is evaluated first
    printf("Result of a + b * c: %d\n", result);

    // Expression with parentheses to change precedence
    result = (a + b) * c; // Addition is evaluated first
    printf("Result of (a + b) * c: %d\n", result);


    //Operator precidence and associativity
    int x = 10, y = 5, z = 2;
    int result2;
    result2 = x * y + z; // Multiplication is evaluated first, then addition
    printf("Result of x * y + z: %d\n", result2);

    // Using parentheses to change the order of evaluation
    result2 = x * (y + z); // Parentheses change the order of evaluation
    printf("Result of x * (y + z): %d\n", result2);

    // Another example with multiple operators
    result2 = x + y * z - 5; // Multiplication is evaluated first, then addition and subtraction
    printf("Result of x + y * z - 5: %d\n", result2);

    return 0;

}