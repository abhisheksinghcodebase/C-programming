//This program demonstrates the use of goto statement in C.
// The goto statement in C is used to transfer control to a labeled statement within the same function.

#include <stdio.h>

int main() {
    int num;

    printf("Enter a positive number: ");
    scanf("%d", &num);

    if (num < 0) {
        goto error; // If the number is negative, jump to the error label
    }

    printf("You entered: %d\n", num);
    return 0;

error:
    printf("Error: Please enter a positive number.\n");
    return 1;
}