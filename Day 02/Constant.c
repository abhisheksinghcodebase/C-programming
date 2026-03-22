// This program demonstrates the use of constants in C language
#include <stdio.h>
#define PI 3.14 // Define a constant named PI with the value 3.14



int main() {
    // Integer constant
    const int P = 3; // Declare a constant integer named P and initialize it with the value 3
    printf("Value of P: %d\n", P); // Print the value of the constant P

    //Real constants
    const float E = 2.718; // Declare a constant float named E and initialize it with the value 2.718
    printf("Value of E: %f\n", E); // Print the value of the constant E

    //single character constant
    const char GRADE = 'A'; // Declare a constant character named GRADE and initialize it with the value 'A'
    printf("Grade: %c\n", GRADE); // Print the value of the constant GRADE

    //string constant
    const char NAME[] = "John Doe"; // Declare a constant string named NAME and initialize it with the value "John Doe"
    printf("Name: %s\n", NAME); // Print the value of the constant NAME

    // Note: Constants cannot be modified after they are initialized. Attempting to change the value of a constant will result in a compilation error.

    // Backslash character constant
    const char BACKSLASH = '\\'; // Declare a constant character named BACKSLASH and initialize it with the value '\\'
    printf("Backslash character: %c\n", BACKSLASH); // Print the value of the constant BACKSLASH

    return 0;
}