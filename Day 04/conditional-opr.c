// Conditional operator (?:) example

#include <stdio.h>

int main() {
    int a = 10, b = 20;
    int max;

    max = (a > b) ? a : b;

    printf("The maximum value is: %d\n", max);

    //swaping of three numbers using conditional operator
    int x = 5, y = 10, z = 15;
    int temp;
    temp = (x > y) ? ((x > z) ? x : z) : ((y > z) ? y : z); // Nested conditional operator to find the maximum among x, y, and z
    printf("The maximum value among x, y and z is: %d\n", temp);

    return 0;
}