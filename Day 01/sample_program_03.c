// This program demonstrates the uses of subroutines in C programming language.
// Subroutines are reusable blocks of code that perform a specific task and can be called from other parts of the program.
// In this program, we will define a subroutine that takes two integers as input and returns their sum.

#include <stdio.h> // Input/output library for C programming language.

int main(){
    int num1, num2; // Declare two integer variables to store the input numbers.
    printf("Enter two integers: "); // Prompt the user to enter two integers.
    scanf("%d %d", &num1, &num2); // Read the two integers from the user and store them in num1 and num2.

    int result = add(num1, num2); // Call the add subroutine to calculate the sum of num1 and num2, and store the result in the variable result.
    printf("The sum of %d and %d is: %d\n", num1, num2, result); // Print the result to the console.

    return 0; // Return 0 to indicate that the program has executed successfully.
}
int add(int a, int b){ // Define the add subroutine that takes two integers as input and returns their sum.
    return a + b; // Return the sum of a and b.
}