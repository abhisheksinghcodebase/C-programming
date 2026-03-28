// The demonstration of switch statement in c programming
// the switch statement is used to make decisions in c programming
// the syntax of switch statement in c programming is as follows

// here is a calculator program using switch statement in c programming

#include<stdio.h>

int main(){
    char operator;
    double num1, num2;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch(operator) { // switch statement to perform the operation based on the operator entered by the user
        case '+': // case for addition
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
            break;
        case '-': // case for subtraction
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
            break;
        case '*': // case for multiplication
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
            break;
        case '/': // case for division
            if(num2 != 0) {
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default: // default case for invalid operator
            printf("Error: Invalid operator.\n");
    }

    return 0;
}