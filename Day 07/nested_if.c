// The Nested if statement in c programming
// the nested if statement is used to make decisions in c programming
// the syntax of nested if statement in c programming is as follows

#include <stdio.h>

int main() {
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 > num2) {
        if (num1 > num3) {
            printf("%d is the largest number.\n", num1);
        } else {
            printf("%d is the largest number.\n", num3);
        }
    } else {
        if (num2 > num3) {
            printf("%d is the largest number.\n", num2);
        } else {
            printf("%d is the largest number.\n", num3);
        }
    }

    return 0;
}