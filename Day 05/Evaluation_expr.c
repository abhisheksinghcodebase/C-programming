//Evaluation of expression in C

#include <stdio.h>

int main() {
    int a = 10, b = 5, c = 2;
    int result;

    // Evaluating an expression
    result = a + b * c; // According to operator precedence, multiplication is evaluated first
    printf("Result of a + b * c: %d\n", result); // This will print the result of the expression 20

    // Using parentheses to change the order of evaluation
    result = (a + b) * c; // Parentheses change the order of evaluation
    printf("Result of (a + b) * c: %d\n", result); // This will print the result of the expression 30

    return 0;
}