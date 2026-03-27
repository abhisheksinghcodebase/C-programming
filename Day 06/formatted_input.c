//The formatted input in c
//basically the function (scanf()) is called formatted input and used for taking input from users by keyboard
// the f in scanf() is stand for formatted input 

#include <stdio.h>

int main(){
    int a;
    char b;
    float c;

    printf("Enter int char and a float value");
    scanf("%d %c %f", &a, &b, &c); // the scanf is formatted input and inside scanf ( %d %c and %f) is formate specifier.

    printf("%d %c %f the value you entered", a, b, c);
}