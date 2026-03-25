// simple calculator using conditional statements in C

#include <stdio.h>

int main() {
    double a, b, result;
    char op;

    printf("Enter expression (e.g. 5 + 3): ");
    scanf("%lf %c %lf", &a, &op, &b);

    result =(op == '+') ? (a + b) :
            (op == '-') ? (a - b) :
            (op == '*') ? (a * b) :
            (op == '/') ? (a / b) :
            (op == '%') ? (int)a % (int)b : 0;

    printf("Result = %.2lf\n", result);

    return 0;
}