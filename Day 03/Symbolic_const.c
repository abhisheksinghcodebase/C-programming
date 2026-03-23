// defining symbolic constants

#include <stdio.h>

#define LENGTH 10 // Define a symbolic constant named LENGTH with the value 10
#define WIDTH 5 // Define a symbolic constant named WIDTH with the value 5

int main() {
    int area = LENGTH * WIDTH;

    printf("Area of rectangle = %d\n", area);
    return 0;
}