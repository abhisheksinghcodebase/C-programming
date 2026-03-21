#include <stdio.h> // Input/output library for C programming language.
int main(){
    int a, b;
    printf("Enter two numbers: "); // Prompt the user to enter two numbers.
    scanf("%d %d", &a, &b); // Read the two numbers entered by the user and store them in the variables a and b.

    printf("The sum of %d and %d is %d\n", a, b, a + b); // Print the sum of the two numbers entered by the user.
    return 0; // Return 0 to indicate that the program has executed successfully.
}