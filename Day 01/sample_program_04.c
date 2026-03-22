// This program demonstrates the uses of math functions in C programming language.

#include<stdio.h>
#include <math.h> // Math library for C programming language.

int main(){
    double x = 2.0, y = 3.0;
    double result = pow(x, y); // Calculate x raised to the power of y
    printf("%.2f raised to the power of %.2f is: %.2f\n", x, y, result);

    return 0;
}