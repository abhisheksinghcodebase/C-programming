// Declaration of variables in C
#include <stdio.h> // Input/output library for C programming language.

int main() {
    int age; // Declare an integer variable named age
    float height; // Declare a float variable named height
    char grade; // Declare a char variable named grade
    char name[50]; // Declare a string variable named name with a maximum length of 50 characters

    // Initialize the variables with values
    age = 25; // Assign the value 25 to the variable age
    height = 5.9; // Assign the value 5.9 to the variable height
    grade = 'A'; // Assign the value 'A' to the variable grade
    snprintf(name, sizeof(name), "John Doe"); // Assign the value "John Doe" to the variable name using snprintf for safety

    // Print the values of the variables
    printf("Age: %d\n", age); // Print the value of the variable age
    printf("Height: %.1f\n", height); // Print the value of the variable height with one decimal place
    printf("Grade: %c\n", grade); // Print the value of the variable grade
    printf("Name: %s\n", name); // Print the value of the variable name
    return 0;
}