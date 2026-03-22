// The data types in c programming language are used to define the type of data that a variable can hold.
// The data types in c programming language are divided into several categories such as:
// 1. Basic data types: int, char, float, double, etc.
// 2. Derived data types: arrays, pointers, structures, unions, etc.
// 3. Enumeration data types: enum
// 4. Void data type: void

#include <stdio.h> // Input/output library for C programming language.

int main() {
    // Basic data types
    int age = 25; // Declare an integer variable named age and initialize it with the value 25
    printf("Age: %d\n", age); // Print the value of the variable age

    float height = 5.9; // Declare a float variable named height and initialize it with the value 5.9
    printf("Height: %.1f\n", height); // Print the value of the variable height

    char grade = 'A'; // Declare a char variable named grade and initialize it with the value 'A'
    printf("Grade: %c\n", grade); // Print the value of the variable grade

    char name[] = "John Doe"; // Declare a string variable named name and initialize it with the value "John Doe"
    printf("Name: %s\n", name); // Print the value of the variable name

    //derived data types
    int numbers[5] = {1, 2, 3, 4, 5}; // Declare an array of integers named numbers and initialize it with the values 1, 2, 3, 4, and 5
    printf("Numbers: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]); // Print the values of the array numbers
    }
    printf("\n");

    // Enumeration data type
    enum Color { RED, GREEN, BLUE }; // Define an enumeration named Color with the values RED, GREEN, and BLUE
    enum Color favoriteColor = GREEN; // Declare a variable of type enum Color named favoriteColor and initialize it with the value GREEN
    printf("Favorite Color: %d\n", favoriteColor); // Print the value of the variable favoriteColor

    // Void data type
    void displayMessage(); { // Define a function named displayMessage that takes no parameters and returns void
        printf("Hello, this is a message from the displayMessage function!\n"); // Print a message to the console
    }
    displayMessage(); // Call the displayMessage function to execute its code
    return 0;
}